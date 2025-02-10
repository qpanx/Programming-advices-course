#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    int num = 0;

    for (int i = 1; i <= 5; i++) {
        cout << "Enter a number: ";
        cin >> num;

        if (num > 50) {
            cout << "The number is greater than 50 and won't be clac.";
            continue;
        }
        sum += num;

        
    }
    cout << '\n' << sum;
    
}
