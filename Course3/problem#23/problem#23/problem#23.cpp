#include <iostream>
#include <cmath>
using namespace std;

float calccircleareacircletrianglefunction(int a , int b , int c) {
	const float pi = 3.14;
	float p = (a + b + c) / 2;
	float tranglearea = sqrt(p * (p - a) * (p - b) * (p - c));
	float R = (a * b * c) / (4 * tranglearea);
	return pi * R * R;
	
}


int main()
{
	int a, b, c;
    cout << "Write a program to calculate circle area circle described around an arbitrary triangle.\n";
	cin >> a >> b >> c;
	
	cout << "The area of the circle is: " << round(calccircleareacircletrianglefunction(a, b,c)) << endl;
}
