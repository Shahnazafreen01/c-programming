#include<iostream>
using namespace std;

int main() {
    int i, j, k;

    for (i = 1; i <= 3; i = i + 1) {

        for (j = 1; j <= 3 - i; j = j + 1) {
            cout << " ";
        }

        for (k = 1; k <= i; k = k + 1) {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}
