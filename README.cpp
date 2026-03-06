/*
██████╗ ██████╗  ██████╗ ███████╗    ██╗   ██╗██████╗ 
██╔══██╗██╔══██╗██╔═══██╗██╔════╝    ██║   ██║╚════██╗
██║  ██║██║  ██║██║   ██║███████╗    ██║   ██║ █████╔╝
██║  ██║██║  ██║██║   ██║╚════██║    ╚██╗ ██╔╝██╔═══╝ 
██████╔╝██████╔╝╚██████╔╝███████║     ╚████╔╝ ███████╗
╚═════╝ ╚═════╝  ╚═════╝ ╚══════╝      ╚═══╝  ╚══════╝

HTTP Request CLI Tool
Developed by: Redwan Ahemed (Xe Mo)
GitHub Repo: https://github.com/xemonbae01/Ddos-V2
*/

#include <iostream>
#include <string>

using namespace std;

/*
|--------------------------------------------------------------------------
| 📌 Project: Ddos-V2
|--------------------------------------------------------------------------
| A lightweight Node.js CLI tool designed to send HTTP requests
| to a specified target at a defined rate.
|
| The tool can be used for:
|
| • API stress testing
| • Learning about rate limiting
| • Simulating traffic for development environments
|
| ⚠ Educational purposes only.
| Do NOT use this against systems without permission.
|
*/

/*
|--------------------------------------------------------------------------
| ⚙ Features
|--------------------------------------------------------------------------
|
| ✔ Simple interactive CLI interface
| ✔ Supports GET and POST requests
| ✔ Custom requests-per-second configuration
| ✔ Real-time response logging
| ✔ Clean colored terminal output using Chalk
|
*/

/*
|--------------------------------------------------------------------------
| 📦 Requirements
|--------------------------------------------------------------------------
|
| Node.js
| NPM
|
| Dependencies:
| - axios
| - chalk
| - readline
|
*/

/*
|--------------------------------------------------------------------------
| 🚀 Installation
|--------------------------------------------------------------------------
|
| Step 1: Clone the repository
|
|   git clone https://github.com/xemonbae01/Ddos-V2.git
|
| Step 2: Move into the directory
|
|   cd Ddos-V2
|
| Step 3: Install dependencies
|
|   npm install
|
| Step 4: Run the tool
|
|   node ddos.js
|
*/

/*
|--------------------------------------------------------------------------
| 🖥 Usage
|--------------------------------------------------------------------------
|
| The CLI will prompt for three inputs:
|
| 1. Target URL
| 2. HTTP Method (GET / POST)
| 3. Requests Per Second
|
| Example:
|
| Enter URL: https://example.com
| Enter Method: GET
| Enter Requests Per Second: 10
|
| The program will start sending requests and printing responses.
|
| Press CTRL + C to stop the process.
|
*/

/*
|--------------------------------------------------------------------------
| 📊 Example Output
|--------------------------------------------------------------------------
|
| Starting requests to https://example.com using GET at 10 requests/second...
|
| Request #1  - Status: 200 - Success
| Request #2  - Status: 200 - Success
| Request #3  - Status: 200 - Success
|
| Requests stopped.
| Total requests sent: 100
|
*/

/*
|--------------------------------------------------------------------------
| ⚠ Disclaimer
|--------------------------------------------------------------------------
|
| This project is built for:
| - Educational use
| - API testing
| - Development experiments
|
| Misusing this tool to attack servers is illegal and unethical.
| Always test only on systems you own or have permission to test.
|
*/

/*
|--------------------------------------------------------------------------
| 👨‍💻 Author
|--------------------------------------------------------------------------
|
| Name   : Redwan Ahemed
| Alias  : Xe Mo
| GitHub : https://github.com/xemonbae01
|
| If you like this project, consider giving it a ⭐ on GitHub.
|
*/

int main() {
    cout << "Welcome to Ddos-V2 HTTP Request CLI Tool" << endl;
    cout << "Check the comments above for full documentation." << endl;
    return 0;
}
