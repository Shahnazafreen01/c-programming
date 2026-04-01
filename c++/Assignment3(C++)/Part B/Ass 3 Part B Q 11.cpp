#include<iostream>
using namespace std;

int main() {
    int i, j, sum;

    cout << "Perfect numbers between 1 and 500 are : \n";

    for (i = 1; i <= 500; i = i + 1){
        sum = 0;

        for (j = 1; j <= i / 2; j = j + 1) {
            if (i % j ==0) {
                sum = sum + j;
            }
        }

        if (sum == i) {
            cout << i << " ";
        }
    }
    return 0;
}
