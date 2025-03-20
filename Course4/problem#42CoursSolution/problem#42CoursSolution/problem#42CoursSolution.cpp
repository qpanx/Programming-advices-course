#include <iostream>
using namespace std;

struct strTaskDuration {
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

strTaskDuration ReadTaskDuration() {

    strTaskDuration TaskDuration;
    TaskDuration.NumberOfDays = ReadPositiveNumber("Please Enter Number Of Days => ");
    TaskDuration.NumberOfHours = ReadPositiveNumber("Please Enter Number of Hours => ");
    TaskDuration.NumberOfMinutes = ReadPositiveNumber("Please Enter Number of Minutes => ");
    TaskDuration.NumberOfSeconds = ReadPositiveNumber("Please Enter Number of Secondes => ");

    return TaskDuration;
}

int TaskDurationInSeconds(strTaskDuration TaskDuration) {
    int DurationInSeconds = 0;

    DurationInSeconds = TaskDuration.NumberOfDays * 24 * 60 * 60;
    DurationInSeconds += TaskDuration.NumberOfHours * 60 * 60;
    DurationInSeconds += TaskDuration.NumberOfMinutes * 60;
    DurationInSeconds += TaskDuration.NumberOfSeconds;

    return DurationInSeconds;
}

int main()
{
    cout << "\nTask Duration In Seconds: " << TaskDurationInSeconds(ReadTaskDuration());
    cout << endl;

    return 0;
}

