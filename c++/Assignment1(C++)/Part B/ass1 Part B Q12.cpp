#include<iostream>
using namespace std;

int main(){
    float radius, area, circumference;
    const float PI = 3.14159;

    cout << "Enter the radius of the circle : ";
    cin >> radius;

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    cout << "Area = " << area << endl;
    cout << "Circumference = " << circumference;

    return 0;
}
