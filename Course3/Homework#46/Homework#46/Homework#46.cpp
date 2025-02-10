#include <iostream>
using namespace std;

enum enDays {
    sun = 1 , mon = 2 , tues = 3 , weds =4 , turs = 5 , friday = 6 , satur =7
};

void ui() {
    cout << "************************\n";
    cout << "Enter any number i will print the name of day. <note, 1 start sunday from 7 end saturday>" << endl;
    cout << "Enter from 1 to 7" << endl;
}

enDays getuserinput() {
	int day;
	cin >> day;
	return (enDays)day;
}

string print(enDays weekday) {
	switch (weekday)
	{
	case sun:
		return "Sunday";
		break;
	case mon:
		return "Monday";
		break;
	case tues:
		return "Tuesday";
		break;
	case weds:
		return "Wednesday";
		break;
	case turs:
		return "Thursday";
		break;
	case friday:
		return "Friday";
		break;
	case satur:
		return "Saturday";
		break;
	default:
		return "Invalid input";
		break;
	}
}
int main()
{
	ui();
	cout << "today is "<< print(getuserinput());
}
