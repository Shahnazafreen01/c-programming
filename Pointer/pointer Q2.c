#include<stdio.h>

int main(){
    int num;
    int *p;
    p = &num;

    printf("Enter a number: ");
    scanf("%d",&num);

    printf("Memory address of the number: %p\n",&num);
}
