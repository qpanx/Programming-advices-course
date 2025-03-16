#include <iostream>
using namespace std;

int ReadUser() {
	int Age;
	cout << "Enter your Age:";
	cin >> Age;

	return Age;
}

bool VaildAge(int NumberUser, int From, int To) {
	return (NumberUser >= From && NumberUser <= To);
}

void PrintResult(int Age) {
	if (VaildAge(Age, 18, 60))
		cout << Age << " Is a valid age \n";
	else
		cout << Age << " Is invalid age \n";
}

int main() {
	PrintResult(ReadUser());
	return 0;
}

