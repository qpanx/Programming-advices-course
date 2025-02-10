#include <iostream>
#include <string>
using namespace std;

int main()
{
	//1 Convert string to double, float , int


	string st = "43.22";
	int num1;
	double num2;
	float num3;

	num1 = stoi(st);
	num2 = stod(st);
	num3 = stof(st);

	cout << num1 << endl;
	cout << num2 << endl;
	cout << num3 << endl;
	cout << "---------------------" << endl;



	//2 Convert int to string
	int N1 = 20;
	string number;

	number = to_string(N1);
	cout << number << '\n';
	cout << "---------------------" << endl;


	//3 Convert double  to string
	double N2 = 20.5;
	string numberd;

	numberd = to_string(N2);
	cout << numberd << '\n';
	cout << "---------------------" << endl;

	//4 Convert float to string and int
	float N3 = 654.5;
	int numi;
	string numberf;

	numi = N3;

	numi = int(N3);

	numi = (int)N3;


	numberf = to_string(N2);

	cout << numberf << '\n';
	cout << numi << '\n';



}
