#include <iostream>
using namespace std;

float ReadUser() {
	float Num;
	cout << "This program calculate circle area\n";
	cout << "Enter Number here => ";
	cin >> Num;
	return Num;
}

float CalcCircleArea(float Num) {
	const float PI = 3.141592653589793238462643383279502884197;
	float Area = PI * pow(Num, 2) / 4;
	return Area;
}

void PrintResult(float Result) {
	cout << "The result is " << Result << endl;
}

int main() {
	PrintResult(CalcCircleArea(ReadUser()));
}
