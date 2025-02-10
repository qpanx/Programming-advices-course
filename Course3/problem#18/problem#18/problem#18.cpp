#include <iostream>
#include <cmath>
using namespace std;


float calccircleareafunction(int a) {
	return  3.14 * pow(a, 2);
}

int main()
{
    int a;
    cout << "Write a program to calculate circle area.\n";
	cin >> a;
	
	cout << "The area of the circle is: " << calccircleareafunction(a) << endl;
	
}

