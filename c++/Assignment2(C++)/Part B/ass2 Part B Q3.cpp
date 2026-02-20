#include<iostream>
using namespace std;

int main(){

    int a, b, c;

    cout << "Enter three numbers : ";
    cin >> a >> b >> c;

    if (a > b){

        if (a > c){
            cout << "Largest Number = " << a;
        }else{
            cout << "Largest Number = " << c;
        }
    }else{


    }if (b > a){

        if (b > c){
            cout << "Largest Number = " << b;
        }else{
            cout << "Largest Number = " << c;
        }
    }

    return 0;
}
