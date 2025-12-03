#include<stdio.h>

int main(){
    float num;
    num = 5.5;
    float *q;
    q = &num;

    printf("Size of float variable: %zu bytes\n",sizeof (num));
    printf("Size of float pointer: %zu bytes\n",sizeof (q));

    return 0;
}
