#include <iostream>

using namespace  std;

int RandomNumber(int From , int To) {
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillArrayWithRandomNumbers(int arr[100], int &arrLength) {
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++) {
        arr[i] = RandomNumber(-100, 100);
    }
}

void PrintArray(int arr[100], int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        cout << arr[i] << " " ;
    }
    cout << endl ;
}

int CountNegativeNumbers(int arr[100], int arrLength) {
    int Counter = 0;

    for (int i = 0; i < arrLength; i++) {
        if (arr[i] < 0) {
            Counter++;
        }
    }

    return Counter;
}

int main() {
    srand((unsigned)time(NULL));

    int arr[100], arrLength = 0 ,  Counter;

    FillArrayWithRandomNumbers(arr, arrLength);

    cout << "\nArray Elements: ";
    PrintArray(arr, arrLength);

    cout << "\nNegative Numbers: ";
    cout << CountNegativeNumbers(arr, arrLength)<< endl;

    return 0;
}