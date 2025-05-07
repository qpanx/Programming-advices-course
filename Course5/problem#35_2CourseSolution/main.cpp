#include <iostream>

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

bool FindNumberPositionInArray(int Number ,int arr[100], int arrLength ) {

    for (int i = 0; i < arrLength; i++) {
        if (arr[i] == Number) {
            return i;
        }
    }

    return -1;
}

bool IsNumberInArray(int Number, int arr[100], int arrLength) {
    return FindNumberPositionInArray(Number, arr, arrLength) != -1;
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

    if (!IsNumberInArray(Number, arr, arrLength)) {
        cout << "No, The number is not found :-(" << endl;
    }
    else {
        cout << "Yes, it is found :-)" << endl;
    }

    return 0;
}