#include <iostream>
#include <cmath>
using namespace std;

void ReadUser(unsigned short &Num1, unsigned short &Num2 ) {
	cout << "Program to calculate rectangle area through diagonal and side area of rectangle.\n";
	cin >> Num1 >> Num2;

}

float CalcRectangle(unsigned short Num1, unsigned short Num2) {
	return Num1 * (sqrt(pow(Num2, 2) - pow(Num1, 2)));
}

void PrintResult(unsigned short Num1, unsigned short Num2) {
	float Result = CalcRectangle(Num1, Num2);
	cout << "The result is: " << Result << endl;
}

int main() {
	unsigned short Num1, Num2;
	ReadUser(Num1, Num2);
	PrintResult(Num1, Num2);
	return 0;
}
