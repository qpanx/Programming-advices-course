#include <iostream>
#include <string>
using namespace  std;

string ReadUser() {
    string User;
    cout << "Please enter your username: ";
    getline(cin, User);

    return User;
}

string TextEncrypt(string User , short Password) {
    for (int i = 0; i < User.length(); i++) {
        User[i] = char((int)User[i] + Password);
    }
    return User;
}

string TextDecrypt(string User , short Password) {
    for (int i = 0; i < User.length(); i++) {
        User[i] = char((int)User[i] - Password);
    }
    return User;
}


int main() {
    const short Password = 8;
    string User = ReadUser();
    string Encrypt = TextEncrypt(User, Password);
    string Decrypt = TextDecrypt(Encrypt, Password);

    cout << Encrypt << " " << Decrypt << endl;
    return 0;
}