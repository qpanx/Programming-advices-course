#include <iostream>
#include <string>
#include <cstdlib>
using namespace  std;

enum enPrimeNotPrime {
    Prime =1, NotPrime = 2
};


enPrimeNotPrime CheckPrime(int Number)
{

    int M = round(Number / 2);


    for (int Counter = 2; Counter <= M; Counter++)
    {
        if (Number % Counter == 0)
            return enPrimeNotPrime::NotPrime;
    }


    return enPrimeNotPrime::Prime;
}



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
void AddArrayElement(int Number, int arr[100], int &arrLength) {
    arrLength ++;
    arr[arrLength -1] = Number ;
}

void CopyPrimeNumbers(int arrSource[100], int arrDestination[100], int arrLength, int &arrDestinationLength) {
    for (int i = 0; i < arrLength; i++) {
        if (CheckPrime(arrSource[i])==enPrimeNotPrime::Prime) {
            AddArrayElement(arrSource[i], arrDestination, arrDestinationLength);
        }
    }
}

int main() {
    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength = 0;
    int arr2[100];
    int arr2Length = 0;

    FillArrayWithRandomNumbers(arr, arrLength);


    CopyPrimeNumbers(arr, arr2, arrLength, arr2Length);

    cout << "\nArray Elements: ";
    PrintArray(arr, arrLength);

    cout << "\nArray prime Numbers : ";
    PrintArray( arr2, arr2Length);

    return 0;
}