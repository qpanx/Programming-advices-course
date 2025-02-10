#include <iostream>
using namespace std;

int function(int k) {
    int sum = 0;
    int i = 0;
    /*for (int i = 0; i <= k; i += 2) {
        sum += i;
        cout << sum << endl;
    }*/
    while (i <= k) {
        sum += i;
        cout << sum << endl;
        i += 2;
    }
    return sum;
}

int main()
{
    int k;
    cin >> k;
    function(k);
}
