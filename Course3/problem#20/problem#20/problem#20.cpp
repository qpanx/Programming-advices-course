#include <iostream>
using namespace std;

float calccircleareafunction(int d) {
    const double bi = 3.14;
    return bi * pow(d, 2) / 4;
}


int main()
{
    double d;
    cout << "This program calculate circle area\n";
    cin >> d;

    

   

    cout << "The result is " << ceil(calccircleareafunction(d)) << endl;
}

