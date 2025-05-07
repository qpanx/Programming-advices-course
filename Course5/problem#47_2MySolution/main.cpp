#include <iostream>
using namespace std;

float GetFractionPart(float Number) {
    return Number - int(Number);
}

float MyRound(float Number) {
    int IntPart;
    IntPart = (int)Number;

    float FractionPart = GetFractionPart(Number);

    if (abs(FractionPart) >= 0.5) {
        if (Number > 0) {
            return ++IntPart;
        }
        else {
            return --IntPart;
        }
    }
    else {
        return IntPart;
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
    cout << "The round value is (This Function made by me :) )" << MyRound(Number) << endl;
    cout << "The round value is (By C++ function) " << round(Number) << endl;

    return 0;
}