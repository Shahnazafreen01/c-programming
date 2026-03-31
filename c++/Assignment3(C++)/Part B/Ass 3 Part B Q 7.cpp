#include<iostream>
using namespace std;

int main() {
    int i, j;

    cout << "Prime Numbers between 1 and 100 are :\n";

    for (i = 2; i <= 100; i = i + 1) {
        int isPrime = 1;

        for (j = 2; j <= i / 2; j = j + 1) {
            if (i %j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1) {
            cout << i << " ";
        }
    }

    return 0;
}
