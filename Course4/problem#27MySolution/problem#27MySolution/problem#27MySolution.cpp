#include <iostream>
using namespace std;

int ReadUser() {
	int Num;
	cout << "Enter a number: ";
	cin >> Num;
	return Num;
}

void ForLoop(int Num) {
	

	for (int Counter = Num; Counter >= 1; Counter--) {
		cout << Counter << endl;
	}

	
}

int main() {
	int Num = ReadUser();

	ForLoop(Num);
}

