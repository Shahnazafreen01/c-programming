#include<stdio.h>

int main(){
    int a[4];
    int i;

    printf("Enter the values:\n");
    for(i = 0; i < 4; i = i + 1){

        scanf("%d",&a[i]);
}
    printf("Reverse: ");
    for(i = 3; i >= 0; i = i - 1){

        printf("%d",a[i]);
    }
}
