#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *a, *b, *c;

    printf("Enter size of array: ");
    scanf("%d",&n);

    a = (int*) malloc(n * sizeof(int));

    b = (int*) malloc(n * sizeof(int));

    c = (int*) malloc(n * sizeof(int));

    printf("Enter elements of first array: \n");

    for (i = 0; i < n; i = i + 1){
        scanf("%d", a + i);
    }

    printf("Enter elements of second array: \n");

    for (i = 0; i < n; i = i + 1){
        scanf("%d", b + i);
    }

    for (i = 0; i < n; i = i + 1){
        *(c + i) = *(a + i) + *(b + i);
    }

    printf("Result = ");
    for (i = 0; i < n; i = i + 1){
        printf("%d", *(c + i));
    }

    free(a);
    free(b);
    free(c);

    return 0;
}
