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

void ReversDigits( int Number) {
	int Counter = 0; int Remainder = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;

		if (Remainder > 0) {
			Counter++;
			cout << Counter << endl;
		}
	}

	
}

int main()
{

	
	 ReversDigits(ReadPositiveNumber("Please enter the main number?"));
	


	return 0;
}