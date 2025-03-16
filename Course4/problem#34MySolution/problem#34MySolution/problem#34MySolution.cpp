#include <iostream>
using namespace std;

int ReadUser() {
    int TotalSales;
    cout << "Enter your totalsales: \n";
    cin >> TotalSales;

    return TotalSales;
}

int Check(int TotalSales) {
    if (TotalSales >= 1000000)
        return TotalSales * 0.01;
    else if (TotalSales >= 500000 && TotalSales < 1000000)
        return TotalSales * 0.02;
    else if (TotalSales >= 100000 && TotalSales < 500000)
        return TotalSales * 0.03;
    else if (TotalSales >= 50000 && TotalSales < 100000)
        return TotalSales * 0.05;
    else
        return TotalSales;
}

void PrintResult(int Result) {
    cout << "The TotalSales is [" << Result << "]";
}

int main()
{
    PrintResult(Check(ReadUser()));

    return 0;

}
