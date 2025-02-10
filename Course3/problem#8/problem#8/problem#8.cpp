#include <iostream>
using namespace std;

void read(int &mark) {
    cout << "Enter your mark \n";
    cin >> mark;
}
int main()
{
    int mark;
    
    read(mark);

    if (mark >= 50) {
        cout << "Pass" << endl;
    }
    else
    {
        cout << "Fail" << endl;
    }
}
