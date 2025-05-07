#include <iostream>
#include <string>
using namespace  std;
enum enCharType { SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4};

int ReadPositiveNumber(string Message) {
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number < 0);
    return Number;
}

int RandomNumber(int From , int To) {
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

char GetRandomCharacter(enCharType CharType) {
    switch (CharType) {
        case enCharType::SmallLetter:
        {
            return char(RandomNumber(97, 122));
            break;
        }
        case enCharType::CapitalLetter: {
            return char(RandomNumber(65, 90));
            break;
        }
        case enCharType::SpecialCharacter: {
            return char(RandomNumber(33, 47));
            break;
        }
        case enCharType::Digit: {
            return char(RandomNumber(48, 57));
            break;
        }
    }
}

string WordGenerate(enCharType CharType, short lenght)
{

    string Word;

    for (int i = 0; i < lenght; i++)
    {
        Word += GetRandomCharacter(CharType);
    }
    return Word;
}

string GenerateKey(){
    string Key ;

    Key = WordGenerate(enCharType::CapitalLetter, 4) + "-";
    Key = Key + WordGenerate(enCharType::CapitalLetter, 4)+ "-";
    Key = Key + WordGenerate(enCharType::CapitalLetter, 4)+ "-";
    Key = Key + WordGenerate(enCharType::CapitalLetter, 4) ;

    return Key;
}

void GenerateKeys(short NumberOfKeys){

    for (int i = 0; i < NumberOfKeys; i++){
        cout << "Array [" << i<< "]" ;
        cout << GenerateKey() << endl;
    }

}

void FillArrayWithKeys(string arr[100], int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        arr[i] = GenerateKey();
    }
}

int main() {
    srand((unsigned)time(NULL));

    string arr[100];
    int arrLength = 0;
    arrLength = ReadPositiveNumber("How Many keys do you want to generate?.");

    FillArrayWithKeys(arr, arrLength);
    return 0;
}
