#include <iostream>
using namespace std;

struct stInfo {
    string FirstName;
    string LastName;
};

stInfo ReadInfo() {
    stInfo Info;

    cout << "Please Enter your first Name " << endl;
    cin >> Info.FirstName;

    cout << "Please enter your last name " << endl;
    cin >> Info.LastName;

    return Info;
}

string GetFullName(stInfo Info) {
    string FullName;

    FullName = Info.FirstName + " " + Info.LastName;
    return FullName;
    
}

void PrintFullName(string FullName) {
    cout << "Your full name is: " << FullName << endl;
}


int main()
{
    PrintFullName(GetFullName(ReadInfo()));
}
