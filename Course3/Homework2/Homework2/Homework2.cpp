#include <iostream>
using namespace std;
int main()
{
	string name;
	unsigned short int age;
	string city;
	string country ;
	unsigned short int MonthlySalary ;
	unsigned int YearlySalary ;
	char gender ;
	bool married ;

	cout << "Enter your name: ";
	cin >> name;

	cout << "Enter your age: ";
	cin >> age;

	cout << "Enter your city: ";
	cin >> city;

	cout << "Enter your country: ";
	cin >> country;

	cout << "Enter your monthlysalary: ";
	cin >> MonthlySalary;

	cout << "Enter your yearlysalary: ";
	cin >> YearlySalary;

	cout << "Enter M for male or F for female: ";
	cin >> gender;

	cout << "if you married Enter 1 for yes or 0 for no: ";
	cin >> married;

	cout << "******************************" << endl;
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "City: " << city << endl;
	cout << "Country: " << country << endl;
	cout << "Monthly Salary: " << MonthlySalary << endl;
	cout << "Yearly Salary: " << YearlySalary << endl;
	cout << "Gender: " << gender << endl;
	cout << "Married: " << married << endl;
	cout << "******************************" << endl;

	int num1;
	int num2 ;
	int num3 ;

	cout << "Enter 3 numbers for Add:" << endl;
	cin >> num1 >> num2 >> num3;
	int sum = num1 + num2 + num3;
	cout << num1 << "+" << endl;
	cout << num2 << "+" << endl;
	cout << num3 << "+" << endl;
	cout << "-----------------------\n";
	cout << "Total = " << sum << "\n";



	unsigned int AfterYears ;
	unsigned int MyAgeAfter ;

	cout << "Enter number after years "<< endl;
	cin >> AfterYears;

	cout << "Enter number Myage after" << endl;
	cin >> MyAgeAfter;
	cout << "After " << AfterYears << " years you will be " << MyAgeAfter << " years old\n";

}