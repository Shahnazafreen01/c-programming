#include<iostream>
using namespace std;

int main(){
    float firstAngle, secondAngle, thirdAngle;

    cout << "Enter value of First and Second Angle : ";
    cin >> firstAngle >> secondAngle;

    thirdAngle = 180 - (firstAngle + secondAngle);

    cout << "Third Angle is : " << thirdAngle;

    return 0;
}
