#include <iostream>
using namespace std;

void ReadUser(int& Num1, int& Num2, int& Num3) {
    cout << "Enter Three Numbers i will see which one is big.\n";

    cout << "[1]";
    cin >> Num1;

    cout << "[2]";
    cin >> Num2;

    cout << "[3]";
    cin >> Num3;
}

int CheckMax(int Num1, int Num2, int Num3) {
    if (Num1 > Num2 && Num1 > Num3)
        return Num1;
    if (Num2 > Num1 && Num2 > Num3)
        return Num2;
    else
        return Num3;
}

void PrintResult(int Max) {
    cout << "The large Number is => " << Max;
}

int main()
{
    int Num1, Num2, Num3;
    ReadUser(Num1, Num2, Num3);
    PrintResult(CheckMax(Num1, Num2, Num3));
}
