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

void PrintResults(int Number) {
	if (isPerfectNumber(Number))
		cout << Number << " Is Perfect Number. \n";
	else
		cout << Number << " Is Not Perfect Number.\n";
}


int main()
{
	PrintResults(ReadPositiveNumber("Enter a number : "));

	return 0;
}
