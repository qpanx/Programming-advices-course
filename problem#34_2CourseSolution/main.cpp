#include <iostream>
#include <string>
#include <cstdlib>
using namespace  std;


int RandomNumber(int From , int To) {
    int randnum = rand() % (To - From + 1) + From;
    return randnum;
}
void FillArrayWithRandomNumbers(int arr[100], int &arrLength) {
    cout << "Enter number of elements: " << endl;
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

short FindNumberPositionInArray(int Number ,int arr[100], int arrLength ) {

    for (int i = 0; i < arrLength; i++) {
        if (arr[i] == Number) {
            return i;
        }
    }

    return -1;
}

int ReadNumber() {
    int Number = 0;
    cout << "Please enter the number you want to search for:" << endl;
    cin >> Number;

    return Number;
}


int main() {
    srand((unsigned)time(NULL));

    int arr[100],  arrLength;
    FillArrayWithRandomNumbers(arr, arrLength);

    cout << "\nArray Elements: ";
    PrintArray(arr, arrLength);

    int Number = ReadNumber();
    cout << "\n Number you are looking for is: "<< Number << endl;

    short NumberPosition = FindNumberPositionInArray(Number, arr, arrLength);

    if (NumberPosition == -1) {
        cout << "The Number is not found :-(" << endl;
    }
    else {
        cout << "The number is found at position " << NumberPosition << endl;
        cout << "The number is found its order " << NumberPosition + 1 << endl;
    }

    return 0;
}