#include <stdio.h>

int main() {
    int a;
    a = 5;
    int *p;
    p = &a;

    printf("Print value using variable: %d\n",a);

    printf("Print value using pointer: %d\n",*p);

    return 0;
}
