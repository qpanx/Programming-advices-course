#include <iostream>
#include <string>
using namespace std;
int main()
{
	string string1;
	string string2;
	string string3;

	cout << "please Enter string1\n";
	getline(cin, string1);
	
	
	cout << "please enter string2(must be a number)" << endl;
	cin >> string2;

	cout << "please enter string3(must be a number)" << endl;
	cin >> string3;

	cout << "**********************************" << '\n';

	cout << "The length of string1 is: " << string1.length() << endl;
	cout << string1[0] << string1[2] << string1[4] << string1[7] << endl;

	cout << string2 << string3 << endl;

	int sum = stoi(string2) * stoi(string3);
	cout << string2 << "*" << string3 << "=" << sum << endl;

}
