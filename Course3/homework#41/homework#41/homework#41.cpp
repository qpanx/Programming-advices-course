#include <iostream>
#include <string>
using namespace std;

struct personinfo {
    string firstname;
    string lastname;
    int age;
    string phone;
};

void readperson(personinfo &info) {
    

    cout << "Enter Your first name: " << endl;
    cin >> info.firstname;

    cout << "Enter your last name: " << endl;
    cin >> info.lastname;

    cout << "Enter your age: " << endl;
    cin >> info.age;

    cout << "Enter your phone number: " << endl;
    cin >> info.phone;
}

void printperson(personinfo info) {
    cout << "**************" << endl;

    cout << "FristName: " << info.firstname << endl;
    cout << "LastName: " << info.lastname << endl;
    cout << "Age: " << info.age << endl;
    cout << "Phone Number: " << info.phone << endl;

    cout << "**************" << endl;
}

void readall(personinfo person[100], int &NumberOfPerson) {
    
    cout << "How Many persons?\n";
    cin >> NumberOfPerson;

    for (int i = 0; i <= NumberOfPerson - 1; i++) {
        cout << "Please Enter Person's " << i + 1 << " info : \n";
        readperson(person[i]);
    }
}

void printall(personinfo person[100], int NumberOfPerson) {
    for (int i = 0; i <= NumberOfPerson - 1; i++) {
        cout << "Person's" << i + 1 << "Info: \n";
        printperson(person[i]);
    }
}

int main()
{
    personinfo person[100];
    int NumberOfPersons = 1;
    
    readall(person, NumberOfPersons);
    printall(person, NumberOfPersons);
}
