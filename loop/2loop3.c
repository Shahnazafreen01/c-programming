#include<stdio.h>

int main(){
    int n;

    for (n = 10;n <= 40; n = n+1){
        if (n % 2 == 0){
            printf("even\n");
        }else{
            printf("odd\n");
        }
    }

}
