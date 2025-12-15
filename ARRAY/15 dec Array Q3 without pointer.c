#include<stdio.h>

int main(){
    int a[5];
    int b[5];
    int i,sum[5];

    printf("Enter the elements of a[5]:\n");
    for (i = 0; i < 5; i = i + 1){
        scanf("%d",&a[i]);
    }

    printf("Enter the elements of b[5]:\n");
    for (i = 0; i < 5; i = i + 1){
        scanf("%d",&b[i]);
    }

    for (i = 0; i < 5; i = i + 1){
        sum[i] = a[i] + b[i];
    }

    printf("Add two Arrays without pointer:\n");
    for (i = 0; i < 5; i = i + 1){
    printf("%d",sum[i]);
    }
}
