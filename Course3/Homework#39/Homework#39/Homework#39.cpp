#include <iostream>
#include <string>
using namespace std;
//home work #39, #40

void read(float grades[3]) {

	cout << "Please Enter Grade1?" << endl;
	cin >> grades[0];

	cout << "Please Enter Grade2?" << endl;
	cin >> grades[1];

	cout << "Please Enter Grade3" << endl;
	cin >> grades[2];
}

float functionavg(float grades[3]) {
	 return (grades[0] + grades[1] + grades[2]) / 3;
}

int main() {
	float grades[3];
	read(grades);
	cout << functionavg(grades);

	
}