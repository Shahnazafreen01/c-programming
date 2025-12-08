#include<stdio.h>

int main(){
    int a[10];
    int i;

    printf("Enter 10 values: ");

    for(i = 0; i < 10; i = i + 1){

         scanf("%d",&a[i]);
    }
    for(i = 0; i < 10; i = i + 1){

        printf("%d\n",a[i]);
    }
    return 0;
}
