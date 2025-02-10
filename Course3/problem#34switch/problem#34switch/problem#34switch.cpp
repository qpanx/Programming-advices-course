#include <iostream>
using namespace std;

enum enop {
    ADD = '+',
    SUBTRACT = '-',
    MULTIPLY = '*',
    DIVIDE = '/'
};

void line() {
    cout << "----------------------" << endl;
}

int main()
{
    int result;
    int num1, num2;
    cout << "Enter Number 1\n";
    cin >> num1;
    cout << "Enter Number 2\n";
    cin >> num2;

    char user;
    cout << "Enter Your Operation Type(+, -, /, *)" << endl;
    cin >> user;
    
    line();
    switch (user)
    {
    case ADD:
        cout << num1 + num2;
        break;
    case SUBTRACT:
        cout << num1 - num2;
        break;
    case MULTIPLY:
        cout << num1 * num2;
        break;
    case DIVIDE:
        if (num2 != 0)
            cout << num1 / num2;
        else
            cout << "Error: Division by zero";
        break;
    default:
        cout << "Invalid operation";
        break;
    }
}
