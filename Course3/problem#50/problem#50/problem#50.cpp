#include <iostream>
using namespace std;
int main()
{
    int pin;
    int attempts = 3;
    const int correctPin = 1234;

    while (attempts > 0) {
        cout << "Enter PIN: ";
        cin >> pin;

        while (pin != correctPin && attempts > 1) {
            attempts--;
            cout << "Wrong PIN. Try again. (" << attempts << " attempts remaining)" << endl;
            cin >> pin;
        }

        while (pin != correctPin && attempts == 1) {
            attempts--;
            cout << "Card is locked!" << endl;
        }

        while (pin == correctPin) {
            cout << "Correct PIN! Your Balance is 7500" << endl;
            return 0;
        }
    }
}
