#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message) {
	int Number = 0;
	do
	{
		cout << "Enter a Number i will bring a prime numbers (Note only positive)" << endl;
		cin >> Number;
	} while (Number < 0);
	return Number;
}

bool isPerfectNumber(int Number) {
	int Sum = 0;

	for (int i = 1; i < Number; i++) {
		if (Number % i == 0) {
			Sum += i;
		}
	}

	return Number == Sum;
}

void PrintPerfectNumbersFrom1ToN(int Number) {
	for (int i = 1; i <= Number; i++) {
		if (isPerfectNumber(i)) {
			cout << i << endl;
		}
	}
}


int main()
{
	PrintPerfectNumbersFrom1ToN(ReadPositiveNumber("Enter a number : "));

	return 0;
}
