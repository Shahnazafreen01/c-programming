#include<stdio.h>

int main(){
    int n, sum = 0, t;

    printf("Enter a number:");
    scanf("%d",&n);

    while(n != 0){

        t = n % 10;
        sum = sum + t;
        n = n / 10;
    }
    printf("Sum of the number: %d",sum);

}
