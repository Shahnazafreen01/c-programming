#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter the number:");
    scanf("%d",&a);

    for(b=1;b<=10;b=b+1){

        c=a*b;
        if(c%2==0){
            printf("%d\n",c);
        }
    }


}
