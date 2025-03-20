#include <iostream>
using namespace std;

int ReadUser() {
    int User;
    cout << "Enter any number i will see if it is a prime number or not.";
    cin >> User;

    return User;
}

string CheckPrimeNumber(int User) {
    if (User == 2)
        return "Prime";
    else if (User % 2)
        return "Prime";
    else
    {
        return "Not Prime";
    }
}

void PrintResult(string Result) {
    cout << "The Result => " << Result << endl;
}

int main()
{
    PrintResult(CheckPrimeNumber(ReadUser()));
    return 0;
}
