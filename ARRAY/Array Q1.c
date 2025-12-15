#include<stdio.h>

int main(){
    int a[4],i;

    printf("Enter the values: ");

    for(i = 0; i < 4; i = i + 1){

        scanf("%d",&a[i]);
    }
    printf("Enter the values: ");

    for(i = 0; i < 4; i = i +1){

        printf("%d",a[i]);
    }
    return 0;
}
