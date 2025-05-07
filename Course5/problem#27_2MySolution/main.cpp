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
    cout << "Array Elements: ";
    for (int i = 0; i < arrLength; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int AverageAllNumbers(int arr[100], int arrLength) {
    int Counter = 0;

    for (int i = 0; i < arrLength; i++) {
        Counter += arr[i];

    }
    return Counter / arrLength;
}

int main() {
    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength ;

    FillArrayWithRandomNumbers(arr, arrLength);

    cout << "\nArray Elements: ";
    PrintArray(arr, arrLength);

    cout << "\nAverage of all number is " << AverageAllNumbers(arr, arrLength);

    return 0;
}