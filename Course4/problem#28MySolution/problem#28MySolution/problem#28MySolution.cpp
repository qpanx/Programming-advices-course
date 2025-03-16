#include <iostream>
using namespace std;

int ReadUser() {
    int Num;
    cout << "Enter a Number: ";
    cin >> Num;
    return Num;
}

void While(int N) {
    int Counter = 1;

    while (Counter < N)
    {
        cout << Counter << endl;
        Counter += 2;
    }
}

void DoWhile(int N) {
    int Counter = 1;

    do{
        cout << Counter << endl;
        Counter += 2;
    }while (Counter < N);
}

void For(int N) {
    for (int Counter = 1; Counter <= N; Counter+=2) {
        cout << Counter << endl;
    }
}

int main()
{
    int N = ReadUser();
    While(N);
    DoWhile(N);
    For(N);

    return 0;
}
