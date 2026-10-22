#include <iostream>
#include <fstream>
#include <chrono>
#include <ctime>
using namespace std;

int main() {
    ofstream log("monitor_log.txt", ios::app);
    auto now = chrono::system_clock::to_time_t(chrono::system_clock::now());

    cout << "=== PC Monitor Demo ===\n";
    cout << "CPU Usage: 35%\n";
    cout << "RAM Usage: 58%\n";
    cout << "Disk Free: 120 GB\n";

    log << "Monitoring run: " << ctime(&now);
    log << "CPU: 35% RAM: 58% Disk Free: 120GB\n\n";
    log.close();

    return 0;
}
