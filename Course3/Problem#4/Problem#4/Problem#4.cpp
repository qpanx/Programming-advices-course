#include <iostream>
using namespace std;

void read(int &age, bool &license) {
    cout << "Enter your age \n";
    cin >> age;
    cout << "yes if you have driver license put 1, otherwise no put 0" << endl;
    cin >> license;
}


int main()
{
    int age;
    bool license;

    read( age , license);

    if (age >= 21 && 1 == license) {
        cout << "Hired" << endl;
    }
    else
    {
        cout << "Rejected" << endl;
    }

}