#include <iostream>
#include <string>
#include <cstdlib>
using namespace  std;



int RandomNumber(int From , int To) {
    int randnum = rand() % (To - From + 1) + From;
    return randnum;
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

void CopyArray(int arr1[100], int arr2[100], int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        arr1[i] = arr2[i];
        cout << arr2[i] << " ";
    }
}

int main() {
    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength ;

    FillArrayWithRandomNumbers(arr, arrLength);

    cout << "\nArray Elements: ";
    PrintArray(arr, arrLength);

    cout << "\nCopy Array Elements: ";
    CopyArray(arr, arr, arrLength);

    return 0;
}