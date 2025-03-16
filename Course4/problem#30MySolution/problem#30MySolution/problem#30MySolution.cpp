#include <iostream>
using namespace std;


int ReadUser() {
	int Num;
	cout << "Enter a Number: ";
	cin >> Num;
	return Num;
}

int Factorial(int Num) {
	int Result = 1;
	int i = 1;
	while (Num <= 0) {
		cout << "Enter a postive Number\n";
		cin >> Num;
	}
	while (i <= Num) {
		Result *= i;
		cout << Result << endl;
		i += 1;
	}
	return Result;
}

void PrintResult(int Result) {
	cout << "The Factorial: " << Result;
}


int main() {
	PrintResult(Factorial(ReadUser()));
}
