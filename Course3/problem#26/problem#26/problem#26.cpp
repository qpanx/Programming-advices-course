#include <iostream>
using namespace std;

int function(int k) {
    int i = 0;
    while (i <= k) {
        cout << i << endl;
        i++;
    }
    return i;
}

int main()
{
    int k;
    cin >> k;
    function(k);
    
}
