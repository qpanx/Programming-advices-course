#include <iostream>
using namespace std;

int function(int k) {
    int i = k;
    /*for ( i = k; i >= 1; i--) {
        cout << i << endl;
    }*/

    while (i >= 1) {
        cout << i << endl;
        i--;
    }
    return i;
}

int main()
{
    int k;
    cin >> k;
    function(k);
}
