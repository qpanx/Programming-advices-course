#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message) {
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number < 0);
	return Number;
}

void PrintSumDigits(int Number) {

	int Remainder = 0;
	int Sum = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number /= 10;
		Sum = Sum + Remainder;
		
	}
	cout << Sum;
}




int main()
{
	PrintSumDigits(ReadPositiveNumber("Please enter a positve number : "));

	return 0;
}