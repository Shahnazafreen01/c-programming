#include<iostream>
using namespace std;

struct COMPLEX{
    float a;
    float b;

};
int main(){
    COMPLEX c1,c2,c3;
    cout<<"Enter value for c1: ";
    cin>>c1.a>>c1.b;

    cout<<"Enter value for c2: ";
    cin>>c2.a>>c2.b;

    c3.a = c1.a + c2.a;
    c3.b = c1.b + c2.b;
    cout<<c3.a<<"\n"<<c3.b;

}
