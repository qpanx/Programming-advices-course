#include <iostream>
using namespace std;

void ReadUser(int& Num1, int& Num2) {

    cout << "Enter Two numbers i will which one is bigger." << endl;
    cout << "First Number:";
    cin >> Num1;
    cout << "Second Number:";
    cin >> Num2;

}

int CheckMax(int Num1, int Num2) {
    if (Num1 > Num2)
        return Num1;
    else
        return Num2;
}

void PrintResult(int Result) {
    
    cout << "The large Number is :" << Result;
}


int main()
{
    int Num1, Num2;
    ReadUser(Num1, Num2);
    PrintResult(CheckMax(Num1, Num2));
}
