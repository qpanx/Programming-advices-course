#include <iostream>
using namespace std;

struct stNumbers {
    int Num1, Num2, Num3;
};

stNumbers ReadUser() {
    stNumbers  Num;

    cout << "Enter 3 Number i will bring the average: " << endl;
    cin >> Num.Num1 >> Num.Num2 >> Num.Num3;

    return Num;
}

float Avg(int Num1, int Num2, int Num3) {
    return (Num1 + Num2 + Num3) / 3.0f;
}

void PrintResult(int Num1, int Num2, int Num3) {
    float Result = Avg(Num1, Num2, Num3);
    cout << "The result is: " << Result << endl;
}



int main()
{
    stNumbers Numbers = ReadUser();


    PrintResult(Numbers.Num1, Numbers.Num2, Numbers.Num3);

    return 0;
    
}

