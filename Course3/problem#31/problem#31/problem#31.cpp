#include <iostream>
#include <cmath>
using namespace std;

void numpowfunction(int a , int &n1 , int&n2 , int &n3) {

     n1 = pow(a, 2);
     n2 = pow(a, 3);
     n3 = pow(a, 4);
    
}

int main()
{
    int a;
    cout << "Program enter number power of 2\n";
    cin >> a;

    int n1, n2, n3;
    numpowfunction(a, n1, n2, n3);
    
    cout << "The resuld is: " << n1<< "," << n2 << ","<< n3 << endl;
    
    
}
