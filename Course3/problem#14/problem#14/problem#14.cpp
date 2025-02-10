#include <iostream>
#include <string>

using namespace std;
// & mean affect the orgainl varible
void swapfunction(int &A , int &B) {
    int 
    C = A;
    A = B;
    B = C;
}

int main()
{
    int a;
    int b;
    
    cout << "Enter 2 numbers i will swap it: " << endl;
    cin >> a >> b;
    swapfunction(a, b);

    cout << "The swap is done: "<< a<< ":"<<b << endl;
    
    return 0;
}
