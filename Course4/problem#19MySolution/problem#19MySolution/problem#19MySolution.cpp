#include <iostream>
using namespace std;

float ReadUser() {
	float Num;
	cout << "This program calculate circle area\n";
	cout << "Enter the Number here => ";
	cin >> Num;

	return Num;
}

float CalcCircleArea(float Num) {
	const float PI = 3.141592653589793238462643383279502884197;
	return PI * pow(Num, 2) / 4;
}

void PrintResult(float Result) {
	cout << "The result is : " << Result;
}

int main() {
	PrintResult(CalcCircleArea(ReadUser()));
}
