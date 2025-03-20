#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message) {
    int Number = 0;
    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

string Check(int Number) {
    if (Number == 1)
        return "Sunday";
    else if (Number == 2)
        return "Monday";
    else if (Number == 3) {
        return "Tuesday";
    }
    else if (Number == 4) {
        return "Wednesday";
    }
    else if (Number == 5) {
        return "Thursday";
    }
    else if (Number == 6) {
        return "Friday";
    }
    else if (Number == 7) {
        return "Saturday";
    }
    else
    {
        return "Wrong Nubmer :)";
    }
}

int main()
{
    int User = ReadPositiveNumber("Enter a number i will see it what day is it: ");
    cout << Check(User);
    return 0;
}
