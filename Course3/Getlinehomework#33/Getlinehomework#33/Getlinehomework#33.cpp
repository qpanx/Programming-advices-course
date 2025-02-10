#include <iostream>
#include <string>
using namespace std;


int main()
{
    int number;
    string name;
    string country;


    cout << "Enter number\n";
    cin >> number;

    cout << "Enter your fullname.\n";

    cin.ignore(1, '\n');

    getline(cin, name) ;

    cout << "Enter your country" << endl;
    cin >> country;

    cout << "Number: " << number << ", Name: " << name << ", Country: " << country << endl;

}
