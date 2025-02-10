#include <iostream>
using namespace std;

void read(int &pin) {
    cout << "Enter your pin code\n";
    cin >> pin;
}

int main()
{
    int pin;
    int balance = 7500;
    
    read(pin);

    if (pin == 1234) {
        cout << "Your balance is:" << balance << endl;
    }
    else
    {
        cout << "wrong pin" << endl;
    }
}
