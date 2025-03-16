#include <iostream>
using namespace std;

int ReadUser() {
	int Num;
	cout << "Enter Number";
	cin >> Num;
	return Num;
}

int Check(int Num) {
	int i = 1;
	while (i <= Num) {
		cout << i << endl;
		i++;
	}
	return i;
}

void PrintResult(int Result) {
	cout << "The Result ";
}

int main() {
	PrintResult(Check(ReadUser()));
}
