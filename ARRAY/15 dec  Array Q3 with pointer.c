#include<stdio.h>

int main(){
    int a[5];
    int b[5];
    int sum[5],i;
    int *p1, *p2, *p3;

    p1 = a;
    p2 = b;
    p3 = sum;

    printf("Enter the elements of a[5]:\n");
    for (i = 0; i < 5; i = i + 1){
        scanf("%d",p1 + i);
    }

    printf("Enter the elements of b[5]:\n");
    for (i = 0; i < 5; i = i + 1){
        scanf("%d",p2 + i);
    }
    for (i = 0; i < 5; i = i + 1){
        *(p3 + i) = *(p1 + i) + *(p2 + i);
    }

    printf("Add two Arrays with pointer:\n");
    for (i = 0; i < 5; i = i + 1){
        printf("%d",*p3 + i);
    }
    return 0;

}
