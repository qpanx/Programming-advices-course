#include <iostream>
using namespace std;

int ReadUser() {
    int User;
    cout << "Calculactor piggy bank\n";
    cin >> User;

    return User;
}

float Check(int User) {
    float Total = User * 1 + User * 5 + User * 10 + User * 25 + User * 100;
    return Total / 100;
}

void PrintResult(float Result) {

    cout << "The result is: " << Result << endl;
}




int main()
{
    PrintResult(Check(ReadUser()));

    return 0;
}
