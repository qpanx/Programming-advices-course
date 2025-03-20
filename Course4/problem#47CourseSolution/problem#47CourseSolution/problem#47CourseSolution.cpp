#include <iostream>
using namespace std;

float ReadPositiveNumber(string Message){
    float Number = 0;

    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

float TotalMonths(float LoanAmount, float MothlyInstallment) {
    return LoanAmount / MothlyInstallment;
}

int main()
{
    float LoanAmount = ReadPositiveNumber("Please Enter Loan Amount: ");
    float MonthlyInstallment = ReadPositiveNumber("Please Enter Montly Installment: ");

    cout << "\nTotal Months to pay = " << TotalMonths(LoanAmount, MonthlyInstallment) << endl;

    return 0;
}
