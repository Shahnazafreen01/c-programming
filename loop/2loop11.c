#include<stdio.h>

int main(){
    int i,j,k;

    for (i = 0; i <= 3; i = i+1){

        for (j = 0; j <= i; j = j+1){

            printf("*");
        }
        for (k = 0; k < 4-i; k = k+1){
            printf(" ");
        }
        printf("\n");
    }
}

