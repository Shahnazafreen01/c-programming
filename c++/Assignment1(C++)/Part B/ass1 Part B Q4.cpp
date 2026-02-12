#include<iostream>
using namespace std;

int main(){
    float basic,allowance,gross;

    cout << "Enter Basic Salary : ";
    cin >> basic;

    cout << "Enter Allowance : ";
    cin >> allowance;

    gross = basic + allowance;

    cout << "Gross = " << gross;

    return 0;

}
