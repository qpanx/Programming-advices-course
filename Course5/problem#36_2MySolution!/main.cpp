#include <iostream>
using namespace  std;

int ReadNumber() {
    int Number ;
    cout << "Please enter a number : " ;
    cin >> Number ;
    return Number ;
}

void AddElementArray(int Number, int arr[100], int &arrLength) {
    arrLength++;
    arr[arrLength - 1] = Number ;
}

void UserArray(int arr[100], int &arrLength) {
    bool AddMoreElements = true ;

    do {
        AddElementArray(ReadNumber(), arr, arrLength) ;
        cout << "\nDo you want to add more elements ? (y[1]/n[0]) : " ;
        cin >> AddMoreElements ;
    }while(AddMoreElements) ;


}

void PrintArray(int arr[100], int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        cout << arr[i] << " " ;
    }
    cout << endl ;
}


int main() {
    int arr[100] , arrLength = 0;
    UserArray(arr, arrLength) ;
    cout << "Array Length : " << arrLength << endl ;

    cout << "Array Elements : ";
    PrintArray(arr, arrLength) ;

    return 0;
}