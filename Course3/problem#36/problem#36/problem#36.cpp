#include <iostream>
using namespace std;

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
    
    string user;
    cout << "Enter Your Operation Type(+, -,/, *)" << endl;
    cin >> user;
    line();
    if (user == "+"  ) {
         result = num1 + num2;
        cout << result << endl;
    }
    else if(user == "-") {
        result = num1 - num2;
        cout << result << endl;
    }
    else if (user == "/") {
        result = num1 / num2;
        cout << result << endl;
    }
    else
    {
        result = num1 * num2;
        cout << result << endl;
    }
}

