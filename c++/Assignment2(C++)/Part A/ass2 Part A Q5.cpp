#include<iostream>
using namespace std;

int main(){
    int age;

    cout << "Enter Your Age : ";
    cin >> age;

    if ( age >= 18){
        cout << "Eligible for Vote";

    }else{
        cout << "Not Eligible for Vote";
    }

    return 0;
}
