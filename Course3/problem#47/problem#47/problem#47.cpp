#include <iostream>
using namespace std;
int main()
{
    int loanamount;
    int monthlypayment;
    cout << "Enter the Loan Amount and Monthly Payment.\n";
    cin >> loanamount >> monthlypayment;
    int sum = loanamount / monthlypayment;
    cout << "Settle the loan: " << sum << " Months" << endl;
    return 0;
}

