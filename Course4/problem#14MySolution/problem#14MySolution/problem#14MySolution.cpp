#include <iostream>
#include <string>

using namespace std;

void ReadUser(int& Num1, int& Num2) {

	cout << "Enter Two Numbers i will swap them.\n";

	cout << "[1]";
	cin >> Num1;
	cout << "[2]";
	cin >> Num2;
}

void SwapTwoNumbers(int &Num1, int &Num2) {
	
	if (Num1 != Num2) { 
		Num1 = Num1 ^ Num2;
		Num2 = Num1 ^ Num2;
		Num1 = Num1 ^ Num2;
	}


	/*int temp = Num1;
	Num1 = Num2;
	Num2 = temp;*/
}

void PrintResult(int Num1, int Num2) {
	cout << "The Swap had done =>  " << Num1 << " : " << Num2;
}

int main() {
	int Num1, Num2;

	ReadUser(Num1, Num2);
	SwapTwoNumbers(Num1, Num2);
	PrintResult(Num1, Num2);
}
