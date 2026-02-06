#include <iostream>
using namespace std;

// Function to take transpose of 2x2 matrix
void transpose(int m[2][2], int t[2][2]) {
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
            t[j][i] = m[i][j];
}

// Function to add two matrices
void add(int a[2][2], int b[2][2], int r[2][2]) {
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
            r[i][j] = a[i][j] + b[i][j];
}

// Function to print matrix
void print(int m[2][2]) {
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++)
            cout << m[i][j] << " ";
        cout << endl;
    }
}

int main() {
    int A[2][2], B[2][2];

    cout << "Enter matrix A (2x2):\n";
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            cin >> A[i][j];

    cout << "Enter matrix B (2x2):\n";
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            cin >> B[i][j];

    int AT[2][2], BT[2][2];
    int temp1[2][2], temp2[2][2];
    int t1[2][2], t2[2][2];
    int result[2][2];

    // Transpose A and B
    transpose(A, AT);
    transpose(B, BT);

    // (B + A^T)
    add(B, AT, temp1);

    // (B + A^T)^T
    transpose(temp1, t1);

    // (B^T + A)
    add(BT, A, temp2);

    // (B^T + A)^T
    transpose(temp2, t2);

    // Final result
    add(t1, t2, result);

    cout << "\nFinal Result Matrix:\n";
    print(result);

    return 0;
}
