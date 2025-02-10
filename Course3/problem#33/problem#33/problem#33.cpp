#include <iostream>
using namespace std;
int main()
{
    int grade;
    cout << "Enter your grade\n";
    cin >> grade;

    if (grade <= 100 && grade >= 90) {
        cout << "A";
    }
    else if(grade <= 89 && grade >=80)
    {
        cout << "B";
    }
    else if (grade <= 79 && grade >= 70) {
        cout << "C";
    }
    else if (grade <= 69 && grade >= 60) {
        cout << "D";
    }
    else if (grade <= 59 && grade >= 50) {
        cout << "E";
    }
    else {
        cout << "F";
    }
}
