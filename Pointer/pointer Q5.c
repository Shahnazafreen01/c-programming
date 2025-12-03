#include<stdio.h>

int main(){
    char ch = 'A';
    char *p = &ch;

    printf("Address before increment: %p\n",p);


    p++;


    printf("Address after increment: %p\n",p);

    return 0;
}
