#include<stdio.h>

int main(){
    int a[10];
    int i,e,o;
    for(i = 0; i < 10; i = i + 1){
        scanf("%d",&a[i]);
        if(a[i] % 2 == 0){

            e = e + 1;

            printf("Even numbers");

        }else{
            o = 0 + 1;
            printf("Odd numbers");
        }
    }
}
