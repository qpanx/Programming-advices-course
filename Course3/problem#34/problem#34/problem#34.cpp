#include <iostream>
using namespace std;
int main()
{
    int result;
    int totalsales;
    cout << "Enter your totalsales: \n";
    cin >> totalsales;

    if (totalsales >=1000000) {
        result = totalsales * 0.01;
        cout << "The total sales is : " << result;
    }
    else if (totalsales >= 500000 && totalsales < 1000000) {
        result = totalsales * 0.02;
        cout << "The total sales is : " << result;
    }
    else if (totalsales >= 100000 && totalsales < 500000) {
        result = totalsales * 0.03;
        cout << "The total sales is : " << result;
    }
    else if (totalsales >= 50000 && totalsales < 100000) {
        result = totalsales * 0.05;
        cout << "The total sales is : " << result;
    }
    else {
        cout << "The total sales is : " << totalsales;
    }
}
