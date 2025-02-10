#include <iostream>
using namespace std;
int main()
{
    int num1;
    int num2;
    int num3;
    cout << "Enter 3 numbers to take average : " << endl;
    cin >> num1 >> num2 >> num3;

    int ave = (num1 + num2 + num3) / 3;

    cout << "The average 3 numbers is : " << ave << endl;
}

