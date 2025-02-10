#include <iostream>
using namespace std;
int main()
{
    double price;
    cout << "Program to read a billvalue and add servuce fee and sales tax\n";
    cin >> price;
    double service_fee = 0.1 * price;
    double sales_tax = 0.16 * price;
    double sum = service_fee + sales_tax + price;
    cout << "The result is: " << sum << endl;
    return 0;
}

