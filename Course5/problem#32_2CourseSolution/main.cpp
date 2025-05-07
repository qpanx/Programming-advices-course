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

void FillArrayWithRandomNumbers(int arr[100], int arrLenght) {
    for (int i = 0; i < arrLenght; i++) {
        arr[i] = RandomNumber(1, 100);
    }
}

void CopyArrayReversed(int arr[100],int reversedArr[100], int arrLenght) {
    for (int i = 0; i < arrLenght; i++) {
        reversedArr[i] = arr[arrLenght-1-i];
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

    int arr[100];
    int arrLength  = ReadPositiveNumber("\n Enter number of elements: ");

    FillArrayWithRandomNumbers(arr, arrLength);



    cout << "\nArray Elements : ";
    PrintArray(arr, arrLength);


    int reversedArr[100];
    CopyArrayReversed(arr, reversedArr, arrLength);
    cout << "\nReversed Array : ";
    PrintArray(reversedArr, arrLength);


    return 0;
}