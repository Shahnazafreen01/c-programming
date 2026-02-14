#include<iostream>
using namespace std;

int main(){

    char ch;

    cout << "Enter a Character : ";
    cin >> ch;

    int asciiValue = (int)ch;

    cout << "Entered Character = " << ch << endl;
    cout << "ASCII Value = " << asciiValue << endl;

    return 0;
}
