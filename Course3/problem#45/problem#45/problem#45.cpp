#include <iostream>
using namespace std;

int main()
{
    int month;
    cout << "Enter a number and i will print a name of months. \n";
    cin >> month;

    if (month == 1) {
        cout << "January";
    }
    else if (month == 2) {
        cout << "Ferbuary";
    }
    else if (month == 3) {
        cout << "March";
    }
    else if (month == 4) {
        cout << "April";
    }
    else if (month == 5) {
        cout << "May";
    }
    else if (month == 6) {
        cout << "June";
    }
    else if (month == 7) {
        cout << "July";
    }
    else if (month == 8) {
        cout << "August";
    }
    else if (month == 9) {
        cout << "September";
    }
    else if (month == 10) {
        cout << "October";
    }
    else if (month == 11) {
        cout << "November";
    }
    else if (month == 12) {
        cout << "December";
    }
    else
    {
        cout << "Wrong Number , Enter from 1 to 12 only.";
    }
}
