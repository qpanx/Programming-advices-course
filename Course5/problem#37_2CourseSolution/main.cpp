#include <iostream>
#include <string>
#include <cstdlib>
using namespace  std;

int RandomNumber(int From , int To) {
    int randnum = rand() % (To - From + 1) + From;
    return randnum;
}

void AddArrayElement(int Number, int arr[100], int &arrLength) {
    arrLength +++;
    arr[arrLength -1] = Number ;
}

void FillArrayWithRandomNumbers(int arr[100], int &arrLength) {
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++) {
        arr[i] = RandomNumber(1, 100);
    }
}

void PrintArray(int arr[100], int arrLength) {

    for (int i = 0; i < arrLength; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void CopyArrayUsingAddArrayElement(int arrSource[100], int arrDestination[100], int arrLength, int arrDestinationLength) {
    for (int i = 0; i < arrLength; i++) {
        AddArrayElement(arrSource[i], arrDestination, arrDestinationLength);

    }
}

int main() {
    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength = 0;
    int arr2Length = 0;

    FillArrayWithRandomNumbers(arr, arrLength);

    int arr2[100];
    CopyArrayUsingAddArrayElement(arr, arr2, arrLength, arr2Length);

    cout << "\nArray Elements: ";
    PrintArray(arr, arrLength);

    cout << "\nCopy Array Elements: ";
    PrintArray( arr2, arrLength);

    return 0;
}