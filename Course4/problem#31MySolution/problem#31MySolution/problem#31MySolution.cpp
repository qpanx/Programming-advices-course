#include <iostream>

using namespace std;


int ReadUser() {
	int Num;
	cout << "Enter a number => ";
	cin >> Num;
	return Num;
}

void PowOf2_3_4(int Num, int &Pow2, int &Pow3, int &Pow4) {
	Pow2 = Num * Num;
	Pow3 = Num * Num * Num;
	Pow4 = Num * Num * Num * Num;
}

void PrintResutl(int Pow2, int Pow3, int Pow4) {
	cout << "The result of powers are: " << endl;
	cout << "Square (^2): " << Pow2 << endl;
	cout << "Cube (^3): " << Pow3 << endl;
	cout << "Fourth power (^4): " << Pow4 << endl;
}


int main() {
	int Number = ReadUser();

	int Pow2, Pow3, Pow4;
	PowOf2_3_4(Number, Pow2, Pow3, Pow4);


	PrintResutl(Pow2, Pow3, Pow4);

	return 0;
}


