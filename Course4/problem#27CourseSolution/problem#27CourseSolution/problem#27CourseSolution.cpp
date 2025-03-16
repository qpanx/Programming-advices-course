#include <iostream>
using namespace std;

int ReadNumber() {
    int Number;
    cout << "please Enter a nubmer: " << endl;
    cin >> Number;
    return Number;
}

void PrintRangeFromNto1_UsingWhile(int N) {
    int Counter = N + 1;

    cout << "Range printed using [while statement]:\n";

    while (Counter > 1) {
        Counter--;
        cout << Counter << endl;
    }
}

void PrintRangeFromNto1_UsingDoWhile(int N) {
    int Counter = N + 1;

    cout << "Range printed using [do while statement]:\n";
    do {
        Counter--;
        cout << Counter << endl;
    } while (Counter > 1);
}

void PrintRangeFromNto1_UsingFor(int N) {
    cout << "Range printed using [For statement]:\n";

    for (int Counter = N; Counter >= 1; Counter--) {
        cout << Counter << endl;
    }
}

int main()
{
    int N = ReadNumber();
    PrintRangeFromNto1_UsingWhile(N);
    PrintRangeFromNto1_UsingDoWhile(N);
    PrintRangeFromNto1_UsingFor(N);

    return 0;
}