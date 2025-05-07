#include <iostream>
#include <string>
#include <cstdlib>
using namespace  std;

int ReadPositiveNumber(string Message) {
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number < 0);
    return Number;
}

void ReadArray (int arr[100] , int &arrLenght) {
    cout << "Enter array length: ";
    cin >> arrLenght;
    cout << endl;
    cout << "Enter array elements: ";

    for (int i = 0; i < arrLenght; i++) {
        cout << "Element [" << i+ 1<< "] : ";
        cin >> arr[i];
    }
    cout << endl;
}

void PrintArray (int arr[100] , int arrLenght) {
    for (int i = 0; i < arrLenght; i++) {
        cout << arr[i] << " ";
        cout << endl;
    }
}

int CheckNumber(int Number , int arr[100] , int arrLenght) {
    int Count = 0;
    for (int i = 0; i < arrLenght-1 ; i++) {
        if (Number == arr[i]) {
            Count++;
        }
    }
    return Count;
}

int main() {
    int arr[100] , arrLenght , NumberCheck;

    ReadArray(arr , arrLenght);

    NumberCheck = ReadPositiveNumber("Enter the number you want to check : ");

    cout << "\nOriginal array elements: \n";
    PrintArray(arr, arrLenght);

    cout << "\nNumber " << NumberCheck;
    cout << " is repeated ";
    cout << CheckNumber(NumberCheck, arr, arrLenght) << " time(s)\n";
}