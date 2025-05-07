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

int RandomNumber(int From , int To) {
    return rand() % (To - From + 1) + From;

}
void FillArrayWithRandomNumbers(int arr[100], int arrLength) {
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

int main() {
    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength = ReadPositiveNumber("Enter array length:");

    FillArrayWithRandomNumbers(arr, arrLength);
    PrintArray(arr, arrLength);

    return 0;
}