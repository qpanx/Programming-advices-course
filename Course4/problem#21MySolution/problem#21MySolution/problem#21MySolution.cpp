#include <iostream>
using namespace std;

float ReadUser() {
	float Num;
	cout << "calculate circle area along the cirumbference.\n";
	cout << "Enter Number here => ";
	cin >> Num;
	return Num;
}

float CalcCirle(float Num) {
	const float PI = 3.141592653589793238462643383279502884197;
	float Area = pow(Num, 2) / (4 * PI);
	return Area;
}

void PrintResult(float Result) {
	cout << "The result is: " << Result;
}

int main() {
	PrintResult(CalcCirle(ReadUser()));
}


