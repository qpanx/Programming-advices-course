#include <iostream>
using namespace std;

int ReadUser() {

    int User = 0;

    cout << "enter numbers i will sum it, if you put -99 the program will stop.";
    cin >> User;

    return User;
}

int SumNumber(int User) {
    int Result = 0;

    while (User != -99) {
        Result += User;
        cout << Result << endl;
        cin >> User;
    }

    return Result;
}

void PrintResult(int Result) {
    cout << "Result : " << Result;
}


int main()
{
    PrintResult(SumNumber(ReadUser()));

    return 0;

}
