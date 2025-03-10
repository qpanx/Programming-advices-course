#include <iostream>
using namespace std;

struct stMax {
    int Num1, Num2;
};

stMax ReadUser() {
    stMax Max;

    cout << "Enter 2 numbers i will see which one is big." << endl;
    cout << "Enter first number.";
    cin >> Max.Num1;
    cout << "Enter second number.";
    cin >> Max.Num2;

    return Max;
}

int CheckMax(int Num1, int Num2) {
    if (Num1 > Num2)
        return Num1;
    else
        return Num2;
}

void PrintResult(int Num1, int Num2) {
    int Result = CheckMax(Num1, Num2);
    cout << "The larger number is: " << Result << endl;
}

int main()
{
    stMax Max = ReadUser();

    PrintResult(Max.Num1, Max.Num2);
}
