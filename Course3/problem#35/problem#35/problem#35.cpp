#include <iostream>
using namespace std;
int main()
{
    int user;
    cout << "Calculactor piggy bank\n";
    cin >> user;

    float total = user * 1 + user * 5 + user * 10 + user * 25 + user * 100;
    float total1 = total / 100;

    cout << "The result is: " << total1 << endl;
}
