#include <iostream>
using namespace std;

void totalsecfunction(int totalsec, int &days, int &hours , int &minute , int&sec) {
     days = totalsec / (24 * 3600);
    totalsec %= 24 * 3600;

     hours = totalsec / 3600;
    totalsec %= 3600;

     minute = totalsec / 60;
     sec = totalsec % 60;
}


int main()
{
    unsigned int totalsec;
    cout << "Enter the totalsec.\n";
    cin >> totalsec;
    
    int days, hours, minute, sec;
    totalsecfunction(totalsec, days, hours, minute, sec);

    cout << round(days) << " : " << round(hours) << " : " << round(minute)  << " : " << round(sec) << endl;
    return 0;
    
}

