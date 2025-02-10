#include <iostream>
using namespace std;

int main() {
    // Input: number of seconds
    long long totalSeconds;
    cout << "Enter the number of seconds: ";
    cin >> totalSeconds;

    // Calculate days, hours, minutes, and seconds
    int days = totalSeconds / (24 * 3600);
    totalSeconds %= (24 * 3600);

    int hours = totalSeconds / 3600;
    totalSeconds %= 3600;

    int minutes = totalSeconds / 60;
    int seconds = totalSeconds % 60;

    // Output the result in the desired format
    cout << days << ":" << hours << ":" << minutes << ":" << seconds << endl;

    return 0;
}
