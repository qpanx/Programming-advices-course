#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float ReadRadious() {
    float R;

    cout << "Please enter radious R: " << endl;
    cin >> R;
    while (R < 0) {
        cout << "Enter a postive number";
        cin >> R;
    }
    
    return R;
}

float CircleArea(float R) {
    const float PI = 3.14159265358979323846;
    float Area = pow(R, 2) * PI;
    return Area;
}

void PrintResult(float Area) {
    cout << fixed << setprecision(4);
    cout << "A= " << Area;
}

int main()
{
    PrintResult(CircleArea(ReadRadious()));
}
