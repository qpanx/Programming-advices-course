#include <iostream>
using namespace std;

int function(int k) {
    int sum = 0;
    int i = 1;
    /*for (int i = 1; i <= k; i = i + 2) {
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
