#include <iostream>
using namespace std;

string ReadPassword() {
    string Password;
    cout << "please enter  a 3-letter password (all capital)\n";
    cin >> Password;
    return Password;
}

bool GuessPassword(string OriginalPaasword) {
    string word = "";
    int Counter = 0;

    cout << "\n";
    for (int i = 65; i <= 90; i++) {
        for (int j = 65; j <= 90; j++) {
            for (int k = 65; k<= 90; k++) {
                Counter++;

                word = word + char(i);
                word = word + char(j);
                word = word + char(k);

                cout << "Trial [" << Counter << "]:  " << word << "\n";

                if (word == OriginalPaasword) {
                    cout << "\nPassword is " << word << "\n";
                    cout << "Fount after " << Counter << " Trial(s)\n";
                    return true;
                }
                word = "";
            }
        }
    }
    return false;
}

int main()
{
    GuessPassword(ReadPassword());

    return 0;
}