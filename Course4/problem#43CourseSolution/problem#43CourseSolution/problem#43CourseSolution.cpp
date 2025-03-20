#include <iostream>
#include <cmath>
using namespace std;

struct strTaskDuration
{
    int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};

int ReadPositiveNumber(string Message) {
    int Number = 0;
    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

strTaskDuration SecondsToTaskDuration(int TotalSeconds) {
    strTaskDuration TaskDuration;

    const int SecondsPerDay = 24 * 60 * 60;
    const int SecodsPerHour = 60 * 60;
    const int SecodsPerMinute = 60;

    int Remainder = 0;

    TaskDuration.NumberOfDays = floor(TotalSeconds / SecondsPerDay);
    Remainder = TotalSeconds % SecondsPerDay;
    TaskDuration.NumberOfHours = floor(Remainder / SecodsPerHour);
    Remainder = Remainder % SecodsPerHour;
    TaskDuration.NumberOfMinutes = floor(Remainder / SecodsPerMinute);
    Remainder = Remainder % SecodsPerMinute;
    TaskDuration.NumberOfSeconds = Remainder;

    return TaskDuration;
}

void PrintTaskDurationDetails(strTaskDuration TaskDuration) {
    cout << "\n";
    cout << TaskDuration.NumberOfDays << ":" << TaskDuration.NumberOfHours << ":" << TaskDuration.NumberOfMinutes << ":" << TaskDuration.NumberOfSeconds << "\n";
}

int main()
{
    int TotalSeconds = ReadPositiveNumber("Please Enter Total Seconds: ");
    PrintTaskDurationDetails(SecondsToTaskDuration(TotalSeconds));

    return 0;
}