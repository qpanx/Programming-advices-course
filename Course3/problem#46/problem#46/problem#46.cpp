#include <iostream>
using namespace std;

char function(){
    char i = 65;

    /*for ( i = 'A'; i < 'Z'; i++) {
        cout << i << endl;
    }*/

    while (i < 'Z') {
        cout << i << endl;
        i++;
    }
    return i;
}

int main()
{
    cout << function();
   
}
