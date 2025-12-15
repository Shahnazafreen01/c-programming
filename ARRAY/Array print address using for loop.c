#include<stdio.h>

int main(){
    int b[3] = {5,9,11},i;
    int *q;
    q = b;

    for (i = 0; i < 3; i = i + 1){
            printf("%d \n",*q);

        q = q + 1;
    }
}
