#include<stdio.h>

int main(){
    int a[5],b[5],c[5];
    int i;

    printf("Enter the values of a: ");

    for(i = 0; i < 5; i = i + 1){

        scanf("%d",&a[i]);
    }
    printf("Enter the values of b : ");

    for(i = 0; i < 5; i = i +1){

        scanf("%d",&b[i]);
    }

    printf("Enter the values of c:");

    for(i = 0; i < 5; i = i + 1){

               c[i] = a[i] + b[i];

        printf("%d\n",c[i]);
    }
}

