#include<stdio.h>

int main(){
    int n;

    for (n = 11; n <= 16; n = n+1){

         if (n % 2 == 0){

            continue;
         }
         printf("%d\n",n);

    }
    printf("EOP");
}
