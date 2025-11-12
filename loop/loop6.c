#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter the number:");
    scanf("%d",&a);

    b = 1;

    while(b<=10){
        c = a*b;

        if(c%2==0){
            printf("%d\n",c);
        }

        b = b+1;
    }


}
