#include <iostream>
using namespace std;

void ReadUser(unsigned short &Num1, unsigned short &Num2) {
	cout << "This program calculate area of Rectangle."<< endl;
	cout << "Enter First Number: ";
	cin >> Num1;
	cout << "Enter Second Number: ";
	cin >> Num2;
}

int CalcAreaRec(short Num1, short Num2) {
	return Num1 * Num2;
}

void PrintResult(short Num1, short Num2) {
	short Result = CalcAreaRec(Num1, Num2);
	cout << "The Resutl is: " << Result;
}

int main() {
	unsigned short Num1, Num2;
	ReadUser(Num1, Num2);
	PrintResult(Num1, Num2);
}
