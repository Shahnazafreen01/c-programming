#include<iostream>
using namespace std;

int Sum(int x,int y){
    int z;
    z = x + y;
    return z;
}
int diff(int x,int y){
    int z;
    z = x - y;
    return z;
}
int main(){
    int a,b,c,d;
    cout <<"Enter value of a: ";
    cin >> a;
    cout <<"Enter value of b: ";
    cin >> b;
    c = Sum (a,b);
    d = diff (a,b);
    cout <<"Sum = "<<c;
    cout <<"\ndiff = "<<d;
}
