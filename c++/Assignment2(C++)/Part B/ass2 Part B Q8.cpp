#include<iostream>
using namespace std;

int main(){
    float a, b, c;

    cout << "Enter Three Sides of the Triangle: ";
    cin >> a >> b >> c;

    if (a + b + c &&  a + c > b && b + c > a) {

        if (a == b) {
            if (b == c) {
                cout << "Triangle is Equilateral.";
            }else{
                cout << "Triangle is Isosceles.";
            }
        }else{
            if (a == c || b == c){
                cout << "Triangle is Isosceles.";
            }else{
                cout << "Triangle is Scalene.";
            }
        }
    }else{
        cout << "Invalid Triangle!";
    }

    return 0;
}
