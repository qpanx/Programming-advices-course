#include <iostream>
using namespace std;

void PrintTableHeader() {
    cout << "\n\n\t\t\t Multipliaction Table From 1 to 10 \n\n";
    cout << "\t";

    for (int i = 1; i <= 10; i++) {
        cout << i << "\t";
    }
    cout << "\n_______________________________________________________________________________________________\n";
}

string ColumSperator(int i) {
    if (i < 10)
        return "   |";
    else
        return "  |";
}

void PrintMultiplicationTable() {
    PrintTableHeader();
    for (int i = 1; i <= 10; i++)
    {
        cout << " " << i << ColumSperator(i) << "\t";
        for (int j = 1; j <= 10; j++) {
            cout << i * j << "\t";
        }
        cout << endl;
    }
}

int main() {
    PrintMultiplicationTable();
}

//
// (I write this code my self after i see the solution but i try to do it my self to see  if i understand the solution very well )
// 
// void PrintHeader() {
//    cout << "\n \n \t \t Multipliaction Table From 1 to 10 \n \n";
//    
//
//    for (int i = 1; i <= 10; i++)
//    {
//        cout << "\t" << i ;
//    }
//    cout << endl;
//    cout << "______________________________________________________________________________________________" << endl;
//}
//
//string Colums(int i) {
//    if (i < 10)
//        return "   |";
//    else
//        return "  |";
//}
//
//void Multipliaction() {
//
//    PrintHeader();
//
//    for (int i = 1; i <= 10; i++) {
//        cout << " " << i << Colums(i) << "\t";
//        for (int j = 1; j <= 10; j++)
//        {
//            cout << i * j << "\t";
//        }
//        cout << endl;
//    }
//}
//
//int main()
//{
//    Multipliaction();
//}
