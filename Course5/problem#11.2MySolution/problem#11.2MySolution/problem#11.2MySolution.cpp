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

int PalindromeNumber(int Number) {
	int Remainder = 0,  Number2 = 0;
	int OriginalNumber = Number;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		Number2 = Number2 * 10 + Remainder;
	}
	return Number2;
}

void CheckYesOrNo(int Number, int Number2) {
	if (Number == Number2) {
		cout << "Yes , it is a Palindrome number.";
	}
	else
	{
		cout << "No, it is NOT a Palindrome number.";
	}
}



int main()
{
	
	int Read = ReadPositiveNumber("Please enter a positive number.");
	int Num = PalindromeNumber(Read);
	CheckYesOrNo(Num , Read);


	return 0;
}