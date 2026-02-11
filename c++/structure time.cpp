#include<iostream>
using namespace std;

struct TIME{
    int h;
    int m;
    int s;
};
int main(){
    TIME a,b,c;
    int x = 0, y = 0;

    cout<<"Enter value for a: ";
    cin>>a.h>>a.m>>a.s;

    cout<<"Enter value for b: ";
    cin>>b.h>>b.m>>b.s;

    if (a.s + b.s >= 60){
        c.s = a.s + b.s - 60;
        x = 1;
    }else{
        c.s = a.s + b.s;
    }

    if (a.m + b.m + x >= 60){
        c.m = a.m + b.m + x - 60;
        y = 1;
    }else{
        c.m = a.m + b.m;
    }

    if (a.h + b.h + y <= 24){
        c.h = a.h + b.h + y;
    }else{
        c.h = a.h + b.h;
    }
    cout<< "Result: "
        << c.h << "h"
        << c.m << "m"
        << c.s << "s";
}
