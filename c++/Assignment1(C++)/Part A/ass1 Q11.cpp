#include<iostream>
using namespace std;

int main(){
    int num1,num2;

    cout << "Enter first integer : ";
    cin >> num1;

    cout << "Enter second integer : ";
    cin >> num2;

    if (num2 != 0){
        cout << "Remainder = " << num1 % num2;
    }else{
        cout << "Cannot divide by zero";
    }

    return 0;
}
