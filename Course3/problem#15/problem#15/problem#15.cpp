#include <iostream>
using namespace std;

int calcareafunction(unsigned int a, unsigned int b) {
    return a * b;
}


int main()
{
    unsigned int a;
    unsigned int b;

    cout << "This program calculate area\n";
    cin >> a >> b;
    cout << "The area is " << calcareafunction(a, b) << endl;
}
