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
void DigitFrequency(int Number) {

	int Remainder = 0;
	Remainder = Number % 10;
	int Counter = 0;
	if (Remainder == Remainder)
	{
		Counter++;
		cout << Counter;

	}
	

}

int main()
{
	cout << "Reverse Of Digits = \n";
	DigitFrequency(ReadPositiveNumber("Please enter a positve number : \n"));

	return 0;
}