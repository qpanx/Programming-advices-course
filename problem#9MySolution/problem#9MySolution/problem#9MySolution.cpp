#include <iostream>
using namespace std;

// Soluttion with DeepSeek ideas

struct Numbers {
	int Num1, Num2, Num3;
};

Numbers ReadUser() {
	Numbers Nums;
	cout << "Enter 3 numbers (separated by spaces): ";
	cin >> Nums.Num1 >> Nums.Num2 >> Nums.Num3;
	return Nums;

}

int SumNumber(Numbers nums) {
	return nums.Num1 + nums.Num2 + nums.Num3;
}

void Print(Numbers nums) {
	int Result = SumNumber(nums);
	cout << "\nThe result of summing the 3 numbers is: " << Result << endl;
}

int main() {
	
	Numbers nums = ReadUser();

	Print(nums);

	return 0;
}




















// My Solution without DeepSeek 
//int ReadUser(int &Num1, int &Num2, int &Num3) {
//	
//
//	cout << "Enter 3 number for add these numbers: " << endl;
//	cin >> Num1 >> Num2 >> Num3;
//
//	return Num1, Num2, Num3;
//}
//
//int SumNumber(int Num1, int Num2, int Num3) {
//	return Num1 + Num2 + Num3;
//}
//
//void Print(int Num1, int Num2, int Num3) {
//	int Result = SumNumber(Num1 , Num2, Num3);
//
//	cout << "\n The result of sum 3 Numbers is : " << Result << endl;
//
//}
//
//
//int main() {
//	int Num1, Num2, Num3;
//	ReadUser( Num1,  Num2,  Num3);
//
//	Print(Num1, Num2, Num3);
//
//	return 0;
//
//}
