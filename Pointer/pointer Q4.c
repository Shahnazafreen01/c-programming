#include<stdio.h>

int main(){
    int num = 8;
    int *p = &num;

    printf("Value before update: %d\n",num);

    (*p)++;

    printf("Value after update: %d\n",num);

    return 0;
}
