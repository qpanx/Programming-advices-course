#include <iostream>
using namespace std;

enum enOddOrEven {
    Odd = 1, Even = 2
};


int ReadNumber() {
    int Number;
    cout << "Enter a Number : ";
    cin >> Number;
    return Number;
}

enOddOrEven CheckOddOrEven(int Number) {

    if (Number % 2 != 0)
        return enOddOrEven::Odd;
    else
        return enOddOrEven::Even;
}

int SumEvenNumbersFrom1toN_UsingFor(int N) {
    int Sum = 0;

    cout << "Sum odd Numbers using for Statement: \n";

    for (int Counter = 1; Counter <= N; Counter++) {
        if (CheckOddOrEven(Counter) == enOddOrEven::Even) {
            Sum += Counter;
        }
    }
    return Sum;
}

int SumEvenNumbersFrom1toN_UsingWhile(int N) {
    int Counter = 0;
    int Sum = 0;

    cout << "Sum odd Numbers using while statement:\n";

    while (Counter < N) {
        Counter++;
        if (CheckOddOrEven(Counter) == enOddOrEven::Even) {
            Sum += Counter;
        }
    }
    return Sum;
}

int SumEvenNumbersFrom1toN_UsingDoWhile(int N) {
    int Counter = 0;
    int Sum = 0;

    cout << "Sum od Numbers using do While statement:\n";
    do {
        Counter++;
        if (CheckOddOrEven(Counter) == enOddOrEven::Even) {
            Sum += Counter;
        }
    } while (Counter < N);

    return Sum;
}

int main()
{
    int N = ReadNumber();

    cout << SumEvenNumbersFrom1toN_UsingDoWhile(N) << endl;
    cout << SumEvenNumbersFrom1toN_UsingFor(N) << endl;
    cout << SumEvenNumbersFrom1toN_UsingWhile(N) << endl;

    return 0;
}
