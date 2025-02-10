#include <iostream>
#include <cmath>
using namespace std;


float calccirclaareafunction(float a , float b) {
    const float pi = 3.14;
   return pi* (pow(b, 2) / 4)* (((2 * a) - b) / ((2 * a) + b));
}



int main()
{
    float a;
    float b;
    cout << "Program calculate circla area in triangle\n";
    cin >> a >> b;
    
    
    cout << "The result is: " << floor(calccirclaareafunction(a,b)) << endl;
}
