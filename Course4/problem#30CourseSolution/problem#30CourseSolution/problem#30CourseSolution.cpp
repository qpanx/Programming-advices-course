#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message) {

    int Number; 
    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number < 0);

    return Number;
}

int Factorial(int N) {
    int F = 1;

    for (int Counter = N; Counter >= 1; Counter--) {
        F *= Counter;
    }
    return F;
}

int main()
{
    cout << Factorial(ReadPositiveNumber("Enter a Number")) << endl;

    return 0;
}
