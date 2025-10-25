#include <iostream>
#include <string> //used tthis header file as I was not sure if iostream had this option
using namespace std;

int main() 
{
    int row;
    string character;

    cout << "Enter number of rows: ";
    cin >> row;

    cout << "Enter character to use: ";
    cin >> character;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < i; j++)
            cout << character;
        cout << endl;
    }

    return 0;
}
