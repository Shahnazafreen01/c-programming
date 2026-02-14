#include<iostream>
using namespace std;

int main(){

    int num1, num2;

    cout << "Enter First Integer : ";
    cin >> num1;

    cout << "Enter Second Integer : ";
    cin >> num2;

    float average = (float)(num1 + num2) / 2;

    cout << "Average = " << average;

    return 0;
}
