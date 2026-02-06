#include <iostream>
using namespace std;

int main() {

    int A[2][2], B[2][2];
    int AT[2][2], BT[2][2];
    int temp1[2][2], temp2[2][2];
    int t1[2][2], t2[2][2];
    int result[2][2];

    // Input A
    cout << "Enter matrix A (2x2):\n";
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            cin >> A[i][j];

    // Input B
    cout << "Enter matrix B (2x2):\n";
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            cin >> B[i][j];

    // Transpose of A
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            AT[j][i] = A[i][j];


    // Transpose of B
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            BT[j][i] = B[i][j];

            // 👉 Show Transpose of A
    cout << "\nTranspose of Matrix A:\n";
    for(int i=0;i<2;i++) {
        for(int j=0;j<2;j++)
            cout << AT[i][j] << " ";
        cout << endl;
    }

    // 👉 Show Transpose of B
    cout << "\nTranspose of Matrix B:\n";
    for(int i=0;i<2;i++) {
        for(int j=0;j<2;j++)
            cout << BT[i][j] << " ";
        cout << endl;
    }

    // temp1 = B + A^T
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            temp1[i][j] = B[i][j] + AT[i][j];

    // t1 = (B + A^T)^T
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            t1[j][i] = temp1[i][j];

    // temp2 = B^T + A
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            temp2[i][j] = BT[i][j] + A[i][j];

    // t2 = (B^T + A)^T
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            t2[j][i] = temp2[i][j];

    // result = t1 + t2
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            result[i][j] = t1[i][j] + t2[i][j];

    // Print result
    cout << "\nFinal Result Matrix:\n";
    for(int i=0;i<2;i++) {
        for(int j=0;j<2;j++)
            cout << result[i][j] << " ";
        cout << endl;
    }

    return 0;
}

