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
    int randnum = rand() % (To - From + 1) + From;
    return randnum;
}
void FillArrayWithRandomNumbers(int arr[100], int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        arr[i] = RandomNumber(1, 100);
    }
}


void SumOf2Arrays(int arr1[100], int arr2[100], int arrSum[100], int arrLenght) {

    for (int i = 0; i < arrLenght; i++) {
        arrSum[i] = arr1[i] + arr2[i];
    }
}


void PrintArray(int arr[100], int arrLength) {

    for (int i = 0; i < arrLength; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}



int main() {
    srand((unsigned)time(NULL));

    int arr[100], arr2[100], arrSum[100];
    int arrLength  = ReadPositiveNumber("How many Elements: ");

    FillArrayWithRandomNumbers(arr, arrLength);
    FillArrayWithRandomNumbers(arr2, arrLength);

    SumOf2Arrays(arr, arr2, arrSum, arrLength);

    cout << "\nArray Elements: ";
    PrintArray(arr, arrLength);

    cout << "\nCopy Array Elements: ";
    PrintArray( arr2, arrLength);

    cout << "\nSum of Array Elements: ";
    PrintArray( arrSum, arrLength);

    return 0;
}