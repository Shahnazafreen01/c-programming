#include<iostream>
using namespace std;

int main() {
    int start, end, i, j;

    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    for (i = start; i <= end; i = i + 1){

        if (i <= 1) continue;

        bool isPrime = true;

        for (j = 2; j <= i / 2; j = j + 1) {

            if(i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << i << " ";
        }
    }

    return 0;
}
