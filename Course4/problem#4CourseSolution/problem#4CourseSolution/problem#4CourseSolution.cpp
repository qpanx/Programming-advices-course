#include <iostream>
using namespace std;

struct stInfo {
	int Age;
	bool License;
};

stInfo ReadInfo() {
	stInfo Info;

	cout << "Enter your age" << endl;
	cin >> Info.Age;
		
	cout << "Do you  have driver License?" << endl;
	cin >> Info.License;

	return Info;
}

bool IsAccepted(stInfo Info) {
	return (Info.Age > 21 && Info.License);
}

void PrintResult(stInfo Info) {
	if (IsAccepted(Info)) {
		cout << "Hired" << endl;
	}
	else {
		cout << "Rejected" << endl;
	}
}


int main()
{
	PrintResult(ReadInfo());
	return 0;
} 

