#include <iostream>
using namespace std;

void read(int &mark1, int &mark2, int &mark3) {
    cout << "Enter your first mark\n";
    cin >> mark1;

    cout << "Enter your second mark\n";
    cin >> mark2;

    cout << "Enter your tried mark\n";
    cin >> mark3;
}


int main()
{
    int mark1, mark2, mark3;
    
    read(mark1, mark2, mark3);

    float avg = (mark1 + mark2 + mark3) / 3;

    if (avg >= 50) {
        cout << avg << "Pass";
    }
    else
    {
        cout << "Fail";
    }
}
