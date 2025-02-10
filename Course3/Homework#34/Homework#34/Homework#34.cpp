#include <iostream>
using namespace std;

void myprocedure() {
    int num1;
    int num2;

    cout << "Please enter number1?" << endl;
    cin >> num1;

    cout << "Please enter number2" << endl;
    cin >> num2;

    cout << "***************" << endl;
    int result = num1 + num2;
    cout << "The sum of two numbers is: " << result;
}


int myfunction() {
    int num1, num2;

    cout << "Please Enter num1: " << endl;
    cin >> num1;

    cout << "Please Enter num2: " << endl;
    cin >> num2;

    return num1 + num2;
}



int main()
{
    myprocedure();
    cout << myfunction() << endl;
}
