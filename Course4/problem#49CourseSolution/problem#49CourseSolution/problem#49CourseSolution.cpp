#include <iostream>
using namespace std;

string ReadPinCode() {
    string PinCode;

    cout << "Please Enter PIN code \n";
    cin >> PinCode;

    return PinCode;
}

bool login() {
    string PinCode;

    do {
        PinCode = ReadPinCode();

        if (PinCode == "1234") {
            return true;
        }
        else
        {
            cout << "\nWrong PIN\n";
            system("color 4F");
        }
    } while (PinCode != "1234");
    return false;
}


int main()
{
    if (login()) {
        system("color 2F");
        cout << "\nYour account balance is " << 7500 << '\n';
    }
    return 0;
}

