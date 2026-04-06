#include <stdio.h>

int main() {
    int n, i, a[n], b[n], c[n];

    printf("Enter size of an array: ");
    scanf("%d", &n);

    printf("Enter elements of first array: \n");

    for (i = 0; i < n; i = i + 1){
        scanf("%d", &a[i]);
    }

    printf("Enter elements of second array: \n");

    for (i = 0; i < n; i = i + 1){
        scanf("%d",&b[i]);
    }

    for (i = 0; i < n; i = i + 1){
        c[i] = a[i] + b[i];
    }

    printf("Result = ");
    for (i = 0; i < n; i = i + 1){
        printf("%d", c[i]);
    }

    return 0;
}
