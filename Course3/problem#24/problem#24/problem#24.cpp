#include <iostream>
using namespace std;

void read(int& age) {
    cout << "Enter your age: \n";
    cin >> age;
}

int main()
{
    int age;
    
    read(age);

    if (age >= 18 && age <= 45) {
        cout << "Vaild age" << endl;

    }
    else
    {
        cout << "Invalid age" << endl;
    }
}
