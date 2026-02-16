#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float m1, m2, m3, total_marks, percentage;

    cout << "Enter marks of three subjects : ";
    cin >> m1 >> m2 >> m3;

    total_marks = m1 + m2 + m3;
    percentage = (total_marks / 300) * 100;

    cout << "Total = " << total_marks << endl;

    cout << fixed << setprecision(2);
    cout << "Percentage = " << percentage << "%";

    return 0;

}
