#include <iostream>
#include <cmath>
using namespace std;

float rectanglefunction( float a,  float b) {
     return a * (sqrt(pow(b, 2) - pow(a, 2)));
}



int main()
{
    float a , b;
    
    
    cout << "Program to calculate rectangle area through diagonal and side area of rectangle.\n";
    cin >> a >> b;
    

    cout << "The result is: " << rectanglefunction(a,b) << endl;

}

