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

void ReverseOfDigits(int Number) {

	int Remainder = 0;
	
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number /= 10;
		cout << Remainder;
		
	}

}




int main()
{
	cout << "Reverse Of Digits = \n";
	ReverseOfDigits(ReadPositiveNumber("Please enter a positve number : \n"));

	return 0;
}