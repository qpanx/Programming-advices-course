#include <iostream>
using namespace std;

int MySqrt(float Number) {
    return pow(Number, 0.5);
}

float ReadNumber() {
    float Number = 0;
    cout << "Enter a number: ";
    cin >> Number;
    return Number;
}

int main() {
    float Number = ReadNumber();
    cout << "The sqrt value is (This Function made by me :) )" << MySqrt(Number) << endl;
    cout << "The sqrt value is (By C++ function) " << sqrt(Number) << endl;

    return 0;
}