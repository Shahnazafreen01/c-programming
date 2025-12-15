#include<stdio.h>

int main(){
    int b[3] = {5,9,11};
    int *q;
    q = b;

    printf("%d \n",*q);

    q = q + 1;

    printf("%d \n",*q);

    q = q + 1;

    printf("%d \n",*q);
}
