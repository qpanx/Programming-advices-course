#include <iostream>
using namespace std;

struct stInfo {
	float UserInput;
};

stInfo ReadInfo() {
	stInfo Info;

	cout << "Enter any Number and i will bring the half of the number: " << endl;
	cin >> Info.UserInput;

	return Info;
}

float HalfNumber(stInfo Info) {
	return Info.UserInput / 2;
}


void PrintNumber(stInfo Info) {
	cout << "The half is :" << HalfNumber(Info) << endl;
}


int main() {
	stInfo Info = ReadInfo();

	PrintNumber(Info);
}