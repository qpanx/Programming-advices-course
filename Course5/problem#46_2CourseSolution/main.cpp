#include <iostream>
using namespace std;

float MyABS(float Number) {
    if (Number > 0)
        return Number;
    else
        return -Number;
}

float ReadNumber() {
    float Number = 0;
    cout << "Enter a number: ";
    cin >> Number;
    return Number;
}

int main() {
    float Number = ReadNumber();
    cout << "The absolute value is (This Function made by me :) )" << MyABS(Number) << endl;
    cout << "The absolute value is (By C++ function) " << abs(Number) << endl;

    return 0;
}