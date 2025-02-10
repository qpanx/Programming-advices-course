#include <iostream>
using namespace std;

void ReadArrayData(int Arr[100], int &Length) {
    cout << "Enter the length of the numbers your want. (note. the limt is 100)" << endl;
    cin >> Length;

    for (int i = 0; i <= Length - 1; i++) {
        cout << "Enter number " << i + 1 << endl;
        cin >> Arr[i];
    }
}

void PrintArrayData(int Arr[100], int Length) {
    for (int i = 0; i <= Length - 1; i++) {
        cout << "Number [" << i + 1 << "]" << Arr[i] << endl;
    }
}

int CalculateArraySum(int Arr[100], int Length) {
    int Sum = 0;

    for (int i = 0; i <= Length - 1; i++) {
        Sum += Arr[i];
    }
    return Sum;
}

float ArrayAverage(int Arr[100], int Length) {
    return (float)CalculateArraySum(Arr, Length) / Length;
}

int main()
{
    int Arr[100], Length = 0;
    ReadArrayData(Arr, Length);
    PrintArrayData(Arr, Length);
    cout << "****************************\n";

    cout << "Sum = " << CalculateArraySum(Arr, Length) << endl;
    cout << "Average = " << ArrayAverage(Arr, Length) << endl;
}

