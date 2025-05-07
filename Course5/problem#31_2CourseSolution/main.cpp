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

void Swap (int &A, int &B) {
    int Temp;
    Temp = A;
    A = B;
    B = Temp;

}


void FillArrayWith1toN(int arr[100], int arrLenght) {
    for (int i = 0; i < arrLenght; i++) {
        arr[i] = i+1;
    }
}

int RandomNumber(int From , int To) {
    int randnum = rand() % (To - From + 1) + From;
    return randnum;
}

void ShuffleArray(int arr[100], int arrLenght) {
    for (int i = 0; i < arrLenght; i++) {
        Swap(arr[RandomNumber(1, arrLenght)-1], arr[RandomNumber(1, arrLenght)-1]);
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

    FillArrayWith1toN(arr, arrLength);



    cout << "\nArray Elements before shuffle: ";
    PrintArray(arr, arrLength);

    ShuffleArray(arr, arrLength);

    cout << "\n Array Elements affter shuffle: ";
    PrintArray( arr, arrLength);

    return 0;
}