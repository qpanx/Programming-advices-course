#include <iostream>
using namespace std;

int ReadUser() {
    int Age;
    cout << "Enter age between 18 and 60 =>";
    cin >> Age;
    return Age;
}

bool ValidCheck(int AgeUser, int From, int To) {
    return (AgeUser >= From && AgeUser <= To);
}

int ReadUntilAgeBetween(int From, int To) {
    int Age = 0;

    do {
        Age = ReadUser();
    } while (!ValidCheck(Age, From, To));
    
    return Age;
}

void PrintResult(int Age) {
    cout << "Your Age is: " << Age;
}

int main()
{
    PrintResult(ReadUntilAgeBetween(18, 60));
}

