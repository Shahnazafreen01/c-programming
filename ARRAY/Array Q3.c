#include<stdio.h>

int main(){
    int a[4], b[4];
    int i;

    printf("Enter the elements of a[5]:\n");
    for (i = 0; i < 4; i = i + 1){
        scanf("%d",&a[i]);
    }
    printf("print elements of a[5] into b[5]:\n");
    a[i] = b[i];
    for (i = 0; i < 4; i = i + 1){
        printf("%d",a[i]);
    }
    return 0;

}
