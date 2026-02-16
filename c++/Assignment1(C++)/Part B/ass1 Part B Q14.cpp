#include<iostream>
using namespace std;

int main(){
    int a, b, quotient, remainder;

    cout << "Enter two integers : ";
    cin >> a >> b;

    quotient = a / b;
    remainder = a % b;

    cout << "Quotient = " << quotient << endl;
    cout << "Remainder = " << remainder;

    return 0;
}
