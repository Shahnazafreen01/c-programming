#include<iostream>
using namespace std;

int main() {
    int num, i, count = 0;

    cout << "Enter a number: ";
    cin >> num;

    if (num <= 1) {
        cout << "Not a prime number";
    }else{
        for(i = 1; i <= num; i = i + 1) {
            if(num % i == 0) {
                count++;
            }
        }

        if(count == 2){
            cout << "Prime number";
        }else{
            cout << "Not a prime number";
        }
    }
    return 0;
}
