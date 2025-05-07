#include <iostream>
using namespace std;

float GetFractionPart(float Number) {
    return Number - int(Number);
}

int MyCeil(float Number) {
    if (abs(GetFractionPart(Number)) > 0) {
        if (Number > 0) {
            return int(Number + 1);
        }
        else {
            return int(Number);
        }
    }
    else {
        return Number;
    }
}

float ReadNumber() {
    float Number = 0;
    cout << "Enter a number: ";
    cin >> Number;
    return Number;
}

int main() {
    float Number = ReadNumber();
    cout << "The ceil value is (This Function made by me :) )" << MyCeil(Number) << endl;
    cout << "The ceil value is (By C++ function) " << ceil(Number) << endl;

    return 0;
}