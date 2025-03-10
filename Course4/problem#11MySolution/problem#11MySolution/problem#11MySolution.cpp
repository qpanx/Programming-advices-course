#include <iostream>
#include <string>
using namespace std;

struct stMarks {
	int Mark1, Mark2, Mark3;
};

stMarks ReadUser() {
	stMarks Marks;

	cout << "Enter your 3 Marks i will see if you pass of fail." << endl;
	cout << "Mark1=>";
	cin >> Marks.Mark1;
	cout << "Mark2=>";
	cin >> Marks.Mark2;
	cout << "Mark3=>";
	cin >> Marks.Mark3;
  
	return Marks;
}

float Avg(int Mark1, int Mark2, int Mark3) {
	return (Mark1 + Mark2 + Mark3) / 3.0f;
}

string PassFail(int Mark1, int Mark2, int Mark3) {
	float Result = Avg(Mark1, Mark2, Mark3);
	if (Result >= 50)
		return "Pass";
	else
		return "Fail";

}

void PrintResult(int Mark1, int Mark2, int Mark3) {
	float Average = Avg(Mark1, Mark2, Mark3);
	string Result = PassFail(Mark1, Mark2, Mark3);
	cout << "Average: " << Average << endl;
	cout << "Result: " << Result << endl;
}

int main() {
	stMarks Marks = ReadUser();

	PrintResult(Marks.Mark1, Marks.Mark2, Marks.Mark3);

	return 0;

}

