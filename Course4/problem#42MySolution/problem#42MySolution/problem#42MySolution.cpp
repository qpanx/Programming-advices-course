#include <iostream>
using namespace std;

float ReadPositiveNumber(string Message) {
    float Number = 0;
    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

float Seconds(int UserInput) {
    return UserInput;
}



int timefunction(int days, int hours, int minutes, int seconds) {
    unsigned  int total = (days * 24 * 60 * 60) + (hours * 60 * 60) + (minutes * 60) + seconds;
    return total;
}


int main()
{
    unsigned  int days;
    unsigned  int hours;
    unsigned  int minutes;
    unsigned  int seconds;
    cout << "Enter the days , hours , minutes and seconds i will make it all in seconds.\n";
    cin >> days >> hours >> minutes >> seconds;

    cout << "The result is: " << round(timefunction(days, hours, minutes, seconds)) << endl;
    return 0;
}
