#include <iostream>
#include <thread>
#include <vector>
#include <atomic>
#include <curl/curl.h>
#include <chrono>
#include <csignal>

std::atomic<long long> requests(0);
bool running = true;

void stop(int sig) {
    running = false;
}

void worker(std::string url, std::string method) {
    CURL *curl = curl_easy_init();
    if(!curl) return;

    curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
    curl_easy_setopt(curl, CURLOPT_NOSIGNAL, 1L);

    if(method == "POST") {
        curl_easy_setopt(curl, CURLOPT_POST, 1L);
    }

    while(running) {
        CURLcode res = curl_easy_perform(curl);
        if(res == CURLE_OK) {
            requests++;
        }
    }

    curl_easy_cleanup(curl);
}

int main() {

    std::string url;
    std::string method;
    int threads;

    std::cout << "Enter URL: ";
    std::getline(std::cin, url);

    std::cout << "Method (GET/POST): ";
    std::getline(std::cin, method);

    std::cout << "Threads (example 50-500): ";
    std::cin >> threads;

    signal(SIGINT, stop);

    curl_global_init(CURL_GLOBAL_ALL);

    std::vector<std::thread> pool;

    for(int i=0;i<threads;i++){
        pool.emplace_back(worker,url,method);
    }

    auto start = std::chrono::steady_clock::now();

    while(running){
        std::this_thread::sleep_for(std::chrono::seconds(1));

        long long r = requests.exchange(0);

        std::cout << "Requests/sec: " << r << std::endl;
    }

    for(auto &t: pool){
        t.join();
    }

    curl_global_cleanup();

    return 0;
}
