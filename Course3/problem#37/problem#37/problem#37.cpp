#include <iostream>
using namespace std;
int main()
{
    cout << "enter numbers i will sum it, if you put -99 the program will stop." << endl;
    int i;
    cin >> i;
    int result = 0;
    
    while (i != -99) {
        result += i;
        cout << result << endl;
        cin >> i;
    }

    
}
