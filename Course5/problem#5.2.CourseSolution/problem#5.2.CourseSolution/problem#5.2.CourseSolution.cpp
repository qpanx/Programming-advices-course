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

void PrintDigits(int Number) {

	int Remainder = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number /= 10;
		cout << Remainder << endl;
		
	}
}




int main()
{
	PrintDigits(ReadPositiveNumber("Please enter a positve number : "));

	return 0;
}