#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message) {
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number < 0);
	return Number;
}

void Pattern(int Number) {

	
	for (int i = Number ; i >= 1; i--) {
		cout << i;
		Number--;
		for (int j = Number  ; j  >= 1; j--) {
			cout << i;
		}

		cout << endl;
	}
	
}



int main()
{
	int Read =ReadPositiveNumber("Enter here:");
	Pattern(Read);

	return 0;
}