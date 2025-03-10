#include <iostream>
using namespace std;

enum enPassFail { Pass = 1, Fail = 2};

int ReadMark() {
    int Mark;

    cout << "Please enter your mark " << endl;
    cin >> Mark;
    return Mark;
}

enPassFail CheckMark(int Mark) {

    if (Mark >= 50)
        return enPassFail::Pass;
    else
        return enPassFail::Fail;

}

void PrintResutl(int Mark) {
    
    if (CheckMark(Mark) == enPassFail::Pass)
        cout << "\n You passed " << endl;
    else
        cout << "\n You Failed " << endl;
}


int main()
{
    PrintResutl(ReadMark());

    return 0;
}
