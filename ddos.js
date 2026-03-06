const x = require('chalk');
const y = require('readline');
const z = require('axios');

const hemlo = `
${x.blue.bold('  _____  _____  _____  _____  _____  _____ ')}
${x.blue.bold(' |     ||   __||   __|| __  ||-   -||   __|')}
${x.blue.bold(' |  |  ||   __||   __||    -||     ||__   |')}
${x.blue.bold(' |_____||_____||_____||__|__||__|__||_____|')}
${x.green.bold('                HTTP Request CLI Tool               ')}
`;

console.log(hemlo);
console.log(x.yellow.bold('Developed by Redwan Ahemed (Xe Mo)'));
console.log(x.cyan('A simple yet powerful CLI tool to send HTTP requests at a specified rate.'));
console.log(x.cyan('Great for testing APIs, learning about rate limiting, or simulating traffic.'));
console.log(x.magenta('Note: Use responsibly on your own servers or with permission. This is for educational purposes.'));

const dihh = y.createInterface({
  input: process.stdin,
  output: process.stdout
});

function startRequests(gaysegs, segs, uno) {
  const pusy = 1000 / uno;
  let voda = 0;

  console.log(x.green(`\nStarting requests to ${gaysegs} using ${segs} at ${uno} requests/second...`));
  console.log(x.gray('Press Ctrl+C to stop.'));

  const dhon = setInterval(async () => {
    voda++;
    try {
      let mon;
      if (segs.toUpperCase() === 'GET') {
        mon = await z.get(gaysegs);
      } else if (segs.toUpperCase() === 'POST') {
        mon = await z.post(gaysegs, {});
      } else {
        console.log(x.red('Unsupported method. Exiting.'));
        process.exit(1);
      }

      console.log(x.green.bold(`Request #${voda} - Status: ${mon.status} - ${x.italic('Success!')}`));
    } catch (e) {
      console.log(x.red.bold(`Request #${voda} - Error: ${e.message}`));
    }
  }, pusy);

  process.on('SIGINT', () => {
    clearInterval(dhon);
    console.log(x.yellow('\nRequests stopped. Total requests sent: ' + voda));
    dihh.close();
    process.exit(0);
  });
}

dihh.question(x.blue('Enter the desired URL (e.g., https://example.com): '), (gaysegs) => {
  dihh.question(x.blue('Enter the HTTP method (GET or POST): '), (segs) => {
    dihh.question(x.blue('Enter how many requests per second: '), (sauwa) => {
      const uno = parseInt(sauwa, 10);

      if (isNaN(uno) || uno <= 0) {
        console.log(x.red('Invalid requests per second. Must be a positive number.'));
        dihh.close();
        return;
      }

      startRequests(gaysegs, segs, uno);
    });
  });
});
