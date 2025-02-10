#include <iostream>
using namespace std;

int main()
{
    int day;
    cout << "Enter any number i will print the name of days [note, 1 start in sunday]\n";
    cin >> day;
	switch (day)
	{
	case 1:
		cout << "Sunday\n";
		break;
	case 2:
		cout << "Monday\n";
		break;
	case 3:
		cout << "Tuesday";
		break;
	case 4:
		cout << "Wednesday\n";
		break;
	case 5:
		cout << "Thursday\n";
		break;
	case 6:
		cout << "Friday\n";
		break;
	case 7:
		cout << "Saturday\n";
		break;
	default:
		cout << "Invalid input\n";
		break;
	}
}
