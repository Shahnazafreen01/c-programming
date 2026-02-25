#include<iostream>
using namespace std;

int main(){
    char cal;
    float num1, num2;

    cout << "Enter an Operator (+, -, *, /): ";
    cin >> cal;

    cout << "Enter two numbers : ";
    cin >> num1 >> num2;

    switch(cal) {
    case '+':
        cout << "Result = " << num1 + num2;
        break;

    case '-':
        cout << "Result = " << num1 - num2;
        break;

    case '*':
        cout << "Result = " << num1 * num2;
        break;

    case '/':
        if (num2 != 0){
            cout << "Result = " << num1 / num2;

        }else{
            cout << "Not Possible";
            break;
        }
    default:
        cout << "Invalid Operator";

        return 0;
    }



}
