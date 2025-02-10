#include <iostream>
using namespace std;


float calccircleareacirumference(int l) {
    return pow(l, 2) / (4 * 3.14);
}

int main()
{
     float l;

    cout << "calculate circle area along the cirumbference.\n";
    cin >> l;
    

    cout << "The result is: " << floor(calccircleareacirumference(l)) << endl;
}

