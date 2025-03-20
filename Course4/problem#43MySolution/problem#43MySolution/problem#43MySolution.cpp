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
    const int SeondsPerMinute = 60;

    int Remainder = 0;

    TaskDuration.NumberOfDays = floor(TotalSeconds )
}


int main()
{
    std::cout << "Hello World!\n";
}
