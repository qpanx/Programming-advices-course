#include <iostream>
using namespace std;


int function(int k) {
    int result = 1;
    int i = 1;
   /* if (k <= 0) {
        cout << "Enter a posstive number " << endl;
        cin >> k;
    }
    else
    {
        for (int i = 1; i <= k; i++) {
            result *= i;
            cout << result << endl;
        }
    }*/
    while (k <= 0) {
        cout << "Enter a postive number\n";
        cin >> k;
    }
    while (i <= k) {
        result *= i;
        cout << result << endl;
        i += 1;
    }
    return result;
}


int main()
{
    int k;
    cin >> k;
    function(k);
    
}
