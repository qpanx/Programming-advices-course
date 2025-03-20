#include <iostream>
using namespace std;

float ReadUserPositive(string Message) {
    float Number = 0;
    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

float TotalBillAfterServiceAndTax(float TotalBill) {
    TotalBill = TotalBill * 1.1;
    TotalBill = TotalBill * 1.16;

    return TotalBill;
}
int main()
{
    float TotalBill = ReadUserPositive("Please enter total Bill ");

    cout << endl;
    cout << "Total Bill = " << TotalBill << endl;
    cout << "Total Bill After Service Fee and Sales Tax = " << TotalBillAfterServiceAndTax(TotalBill) << endl;
    return 0;
} 
