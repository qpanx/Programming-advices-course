#include <iostream>
using namespace std;
int main()
{
    int loanamount;
    int months;
    cout << "program Loan Amount and how many months.\n";
    cin >> loanamount >> months;
    int sum = loanamount / months;
    cout << "The monthly installment amount: " << sum << endl;
    return 0;
}

