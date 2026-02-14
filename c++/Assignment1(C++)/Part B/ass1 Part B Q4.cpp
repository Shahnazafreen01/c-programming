#include<iostream>
using namespace std;

int main(){
    float basic,allowance,grossSalary,HRA,DA;

    cout << "Enter Basic Salary : ";
    cin >> basic;

    cout << "Enter House Rent Allowance : ";
    cin >> HRA;

    cout << "Enter Dearness Allowance : ";
    cin >> DA;

    cout << "Enter Other Allowances : ";
    cin >> allowance;

    grossSalary = basic + HRA + DA + allowance;

    cout << "Gross = " << grossSalary;

    return 0;

}
