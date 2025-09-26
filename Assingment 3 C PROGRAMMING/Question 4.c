#include <stdio.h>

int main(){

    int a,b,c;
    printf("Enter the numbers:");
    scanf("%d%d%d",&a,&b,&c);

    if (a==b && b==c){
        printf("All are equal:");

    }else if (a>=b && b>=c){
        printf("The largest number is:%d");

    }else if (c>=a && c>=b){
        printf("The largest number is:%d");

    }


}
