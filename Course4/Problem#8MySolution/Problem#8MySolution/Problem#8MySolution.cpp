#include <iostream>
using namespace std;

enum enPassFail{ Pass = 1, Fail = 2};

int ReadUserMark() {
	int Mark;

	while (true) {
		cout << "Enter your mark\n";
		cin >> Mark;


		if (Mark >= 0 && Mark <= 100) {
			break;
		}
		else {
			cout << "Invalid mark! Please enter a mark between 0 and 100." << endl;
		}
	}
	

	return Mark;
}

enPassFail CheckMark(int Mark) {
	if (Mark >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}


void PrintMark(int Mark) {
	if (CheckMark(Mark) == enPassFail::Pass)
		cout << "\nYou passed!" << endl;
	else
		cout << "\nYou failed!" << endl;
}

int main() {
	int Mark = ReadUserMark();
    PrintMark(Mark);
}

