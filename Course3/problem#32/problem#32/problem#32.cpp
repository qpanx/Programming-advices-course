#include <iostream>
using namespace std;

int powfunction(int a, int b) {
    int result = 1;
    int i = 0;
    /*for (int i = 0; i < b; ++i) {
        result *= a;
    }*/

    while (i < b){
        result *= a;
        i++;
        }
    return result;
}

int main() {
    int a, b;
    cout << "Enter 2 numbers\n";
    cin >> a >> b;
    
    cout << "Result: " << powfunction(a, b) << endl;
    return 0;
}