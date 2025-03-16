#include <iostream>
#include <cmath>
using namespace std;

void ReadUser(float& Num1) {
	cout << "program to calculate circle area.\n";
	cout << "Enter a nuber => ";
	cin >> Num1;
}

float CalcCircleArea(float Num1) {
	float Area =  3.14 * pow(Num1, 2);
	return Area;
}

void PrintResult(float Area) {
	cout << "The area of the circle is: " << Area;
}

int main()
{
	float Num1;
	ReadUser(Num1);
	PrintResult(CalcCircleArea(Num1));
}

