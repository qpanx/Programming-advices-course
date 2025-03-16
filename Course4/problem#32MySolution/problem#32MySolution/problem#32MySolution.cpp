#include <iostream>
#include <cmath>
using namespace std;

void ReadUser(int &Num, int &Pow) {
	
	cout << "Enter a number => ";
	cin >> Num;

	cout << "Enter a Pow => ";
	cin >> Pow;
}

int PowOfNumber(int Num, int Pow) {
	return pow(Num, Pow);
}

void PrintResult(int Result) {
	cout << "The Result is : " << Result;
}

int main() {
	int Num, Pow;
	ReadUser(Num, Pow);

	
	int Result = PowOfNumber(Num, Pow);

	PrintResult(Result);

	return 0;
}
