#include<iostream>
using namespace std;

int main(){
    float marks;

    cout << "Enter the marks of the Student : ";
    cin >> marks;

     if (marks >= 90 && marks <= 100){
        cout << "Grade: A+";

    }else if (marks >= 80){
        cout << "Grade: A";

    }else if (marks >= 70){
        cout << "Grade: B";

    }else if (marks >= 60){
        cout << "Grade: C";

    }else if (marks >= 50){
        cout << "Grade: D";

    }else{
        cout << "Grade: Fail";
    }

    return 0;

}
