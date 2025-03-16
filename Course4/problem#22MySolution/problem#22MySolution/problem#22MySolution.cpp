#include <iostream>
#include <cmath>
using namespace std;

void ReadUser(float& Num1, float& Num2) {
	cout << "Program calculate circla area in triangle\n";
	cout << "Enter First Nubmer here => ";
	cin >> Num1;
	cout << "Enter Second Number here => ";
	cin >> Num2;
}

float CalcCircleArea(float Num1, float Num2) {
	const float PI = 3.141592653589793238462643383279502884197;
	float Area = PI * (pow(Num2, 2) / 4) * (((2 * Num1) - Num2) / ((2 * Num1) + Num2));
	return Area;
}

void PrintResult(float Result) {
	cout << "The result is: " << Result;
}

int main() {
	float Num1, Num2;
	ReadUser(Num1, Num2);
	PrintResult(CalcCircleArea(Num1, Num2));
	return 0;
}
