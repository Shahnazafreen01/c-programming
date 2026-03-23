#include<iostream>
using namespace std;

void sum (int x[4], int y[4], int *z){
    for (int i = 0; i < 4; i = i + 1){
        *(z + i) = x[i] + y[i];
    }
}

int main(){
    int a[4], b[4], c[4];
    int i;

    cout << "Enter values of a : ";
    for (i = 0; i < 4; i = i + 1){
        cin >> a[i];
    }

    cout << "Enter values of b : ";
    for (i = 0; i < 4; i = i + 1){
        cin >> b[i];
    }

    sum (a, b, &c[0]);

     cout << "c = ";
    for (i = 0; i < 4; i = i + 1){
        cout << c[i] << " ";
    }


}
