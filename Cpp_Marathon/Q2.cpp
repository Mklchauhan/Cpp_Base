#include <iostream>
#include <thread> // For sleep functionality
#include <chrono> // For time duration

using namespace std;

int main() {
    int hours = 0;   // Initialize hours
    int minutes = 0; // Initialize minutes
    int seconds = 0; // Initialize seconds

    while (true) {
        // Print the current time in HH:MM:SS format
        cout << (hours < 10 ? "0" : "") << hours << ":"
             << (minutes < 10 ? "0" : "") << minutes << ":"
             << (seconds < 10 ? "0" : "") << seconds << endl;

        // Increment seconds
        seconds++;

        // Handle seconds overflow
        if (seconds == 60) {
            seconds = 0;
            minutes++;
        }

        // Handle minutes overflow
        if (minutes == 60) {
            minutes = 0;
            hours++;
        }

        // Handle hours overflow (24-hour format)
        if (hours == 24) {
            hours = 0;
        }

        // Wait for 1 second
        this_thread::sleep_for(chrono::seconds(1));

        // Clear the console (optional, for a cleaner display)
        system("clear"); // Use "cls" on Windows instead of "clear"
    }

    return 0;
}
