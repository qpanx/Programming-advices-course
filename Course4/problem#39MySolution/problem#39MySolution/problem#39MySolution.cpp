#include <iostream>
using namespace std;

void ReadUser(int & Num1, int & Num2) {
    cout << "Totalbill substric cashpaid\n";
    cin >> Num1 >> Num2;
}

int TotalBill(int Num1, int Num2) {
    return Num1 - Num2;
}

void PrintResult(int Result) {
    cout << "The result is: " << Result;
}

int main()
{
    int Num1, Num2;
    ReadUser(Num1, Num2);

    PrintResult(TotalBill(Num1 , Num2));
    return 0;

}
