#include<stdio.h>

int main(){
    int a[10],i;

    printf("Enter the values: ");
    for (i = 0; i < 10; i++){
    scanf("%d",&a[i]);
    }
    printf("a = %d\n",a);
    printf("a %p \n",a);
    printf("&a %p\n",&a);

    printf("a[0] = %d\n",a[0]);
    printf("a[0] %p \n",a[0]);
    printf("&a[0] %p\n",&a[0]);

    printf("a[5] = %d\n",a[5]);
    printf("a[5] %p\n",a[5]);
    printf("&a[5] %p\n",&a[5]);

}
