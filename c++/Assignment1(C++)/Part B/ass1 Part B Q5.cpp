#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a,b,result;

    cout << "Enter the value of a : ";
    cin >> a;

    cout << "Enter the value of b : ";
    cin >> b;

    result = pow(a,2) + (2 * a * b) + pow(b,2);

    cout << "(a + b)² = " << result;

    return 0;


}
