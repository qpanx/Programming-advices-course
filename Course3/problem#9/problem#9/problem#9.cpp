#include <iostream>
using namespace std;

int main() {
	int num1;
	int num2;
	int num3;
	cout << "Enter 3 number for add these numbers: " << endl;
	cin >> num1 >> num2 >> num3;

	int sum = num1 + num2 + num3;
	
	cout << "The result is : " << sum;
}