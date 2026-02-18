#include<iostream>
using namespace std;

int main(){
    int num1, num2;

    cout << "Enter First Number : ";
    cin >> num1;

    cout << "Enter Second Number : ";
    cin >> num2;

    if (num1 > num2){
        cout << num1 << " num1 is greater";

    } else if (num1 < num2){
        cout << num2 << " num2 is greater";

    }else{
        cout << "Both are Equal";
    }

    return 0;


}
