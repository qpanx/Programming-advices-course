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

int CountDigitFrequency(short DigitToCheck, int Number) {
	int FreqCount = 0; int Remainder = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;

		if (DigitToCheck == Remainder) {
			FreqCount++;
		}
	}

	return FreqCount;
}

void PrintAllDigitsFrequencey(int Number) {
	cout << endl;

	for (int i = 0; i < 10; i++)
	{
		short digitFrequency = 0;
		digitFrequency = CountDigitFrequency(i, Number);
		if (digitFrequency > 0) {
			cout << "Digit " << i << " Frequencey is " << digitFrequency << " Times(s).\n";
		}
	}
}
int main()
{

	int Number = ReadPositiveNumber("Please enter the main number?");
	PrintAllDigitsFrequencey(Number);


	return 0;
}