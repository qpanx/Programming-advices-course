#include <iostream>
using namespace std;

int main()
{
    int day;
    cout << "Enter any number i will print the name of days [note, 1 start in sunday]\n";
    cin >> day;
    if (day == 1) {
        cout << "Its Sunday :]";
    }
    else if (day == 2) {
        cout << "Its Monday :]";
    }
    else if (day == 3) {
        cout << "Its Tuesday :]";
    }
    else if (day == 4) {
        cout << "Its Wedesday :]";
    }
    else if (day == 5) {
        cout << "Its Thursday :]";
    }
    else if (day == 6) {
        cout << "Its Friday :]";
    }
    else if (day == 7) {
        cout << "Its Saturday :]";
    }
    else
    {
        cout << "Wrong Number plz select from 1 to 7";
    }
}
