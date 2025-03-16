#include <iostream>
using namespace std;

void ReadUser( float& Num1,  float& Num2) {
    cout << "This program calculate triangle area\n";
    cin >> Num1 >> Num2;
}

float CalcTriangleArea(float Num1, float Num2) {
    float Area = 0.5 * Num1 * Num2;
    return Area;
}

void PrintResult(float Area) {
    cout << "The Triangle are is => " << Area;
}

int main()
{
    float Num1, Num2;
    ReadUser(Num1, Num2);
    PrintResult(CalcTriangleArea(Num1, Num2));
    return 0;

}