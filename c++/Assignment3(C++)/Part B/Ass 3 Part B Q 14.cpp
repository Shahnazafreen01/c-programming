#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = n - 1; i >= 2; i = i - 1) {
        bool isPrime = true;

        for (int j = 2; j <= i / 2; j = j + 1) {

            if (i %j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << "Last prime number before " << n << " is " << i;
            break;

        }
    }

    return 0;
}
