#include <iostream>
#include <cmath>
using namespace std;

void ReadUser(int& Num1, int& Num2, int& Num3) {
	cout << "Program to calculate circle area circle described around an arbitrary triangle.\n";
	cout << "Enter Number [1] here => ";
	cin >> Num1;
	cout << "Enter Number [2] here => ";
	cin >> Num2;
	cout << "Enter Number [3] here => ";
	cin >> Num3;
}
float CalcCircleAreaCircleTriangle(int Num1, int Num2, int Num3) {
	const float PI = 3.141592653589793238462643383279502884197;
	float p = (Num1 + Num2 + Num3) / 2;
	float tranglearea = sqrt(p * (p - Num1) * (p - Num2) * (p - Num3));
	float R = (Num1 * Num2 * Num3) / (4 * tranglearea);
	float Area = PI * R * R;
	return Area;
}

void PrintResult(float Result) {
	cout << "The Result is : " << Result;
}

int main() {
	int Num1, Num2, Num3;
	ReadUser(Num1, Num2, Num3);
	PrintResult(CalcCircleAreaCircleTriangle(Num1, Num2, Num3));
	return 0;
}
