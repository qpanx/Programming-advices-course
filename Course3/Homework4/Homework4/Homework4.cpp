#include <iostream>
using namespace std;
int main()
{
    int A;
    int B;
    cout << "Please enter the first number A?\n";
    cin >> A;
    cout << "Please enter the second number B?\n";
    cin >> B;

    cout <<A << "="<< B << ":" << (A == B) << endl;
    cout << (A != B) << endl;
    cout << (A < B) << endl;
    cout << (A > B) << endl;
    cout << (A <= B) << endl;
    cout << (A >= B) << endl;

    return 0;
}
