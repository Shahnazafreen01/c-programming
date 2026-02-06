#include<iostream>
using namespace std;

int swap_func(int *x,int *y){
    int z;
    z = *x;
    *x = *y;
    *y = z;
}
int main(){
    int a,b,c;

    cout <<"Enter value of a & b: ";
    cin >> a >> b;

    swap_func(&a,&b);

    cout <<a <<b;
}
