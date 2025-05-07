#include <iostream>
using namespace std;

int MyFloor(float Number) {
    if (Number > 0) {
        return int(Number);
    }
    else {
        return int(Number) - 1;
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
    cout << "The floor value is (This Function made by me :) )" << MyFloor(Number) << endl;
    cout << "The floor value is (By C++ function) " << floor(Number) << endl;

    return 0;
}