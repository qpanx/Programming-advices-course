#include <iostream>
using namespace std;

struct stPiggyBankContenet {
    int Pennies, Nickels, Dimes, Quarters, Dollars;
};

stPiggyBankContenet ReadPiggyBankContenet() {
    stPiggyBankContenet PiggyBankContenet;

    cout << "Please enter a Total Pennies " << endl;
    cin >> PiggyBankContenet.Pennies;

    cout << "Enter a total Nickels " << endl;
    cin >> PiggyBankContenet.Nickels;

    cout << "Enter a total Dimes " << endl;
    cin >> PiggyBankContenet.Dimes;

    cout << "Enter a total Quarters " << endl;
    cin >> PiggyBankContenet.Quarters;
    
    cout << "Enter a total Dollars " << endl;
    cin >> PiggyBankContenet.Dollars;

    return PiggyBankContenet;
}

int CalculateTotalPennies(stPiggyBankContenet PiggyBankContenet) {
    int TotalPennies = 0;

    TotalPennies = PiggyBankContenet.Pennies * 1 + PiggyBankContenet.Nickels * 5 + PiggyBankContenet.Dimes * 10 + PiggyBankContenet.Quarters * 25 + PiggyBankContenet.Dollars * 100;

    return TotalPennies;
}

int main()
{
    int TotalPennies = CalculateTotalPennies(ReadPiggyBankContenet());
    cout << endl << "Total Pennies = " << TotalPennies << endl;
    cout << endl << "Total Dollars = " << (float)TotalPennies / 100 << "\n";

    return 0;
}
