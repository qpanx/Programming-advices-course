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

void CopyArray(int arrSource[100], int arrDestination[100], int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        arrDestination[i] = arrSource[i];

    }
}

int main() {
    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength ;

    FillArrayWithRandomNumbers(arr, arrLength);

    int arr2[100];
    CopyArray(arr, arr2, arrLength);

    cout << "\nArray Elements: ";
    PrintArray(arr, arrLength);

    cout << "\nCopy Array Elements: ";
    PrintArray( arr2, arrLength);

    return 0;
}