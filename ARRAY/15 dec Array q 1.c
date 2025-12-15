#include<stdio.h>

int main(){
    int a[5],i;

    printf("Enter the elements of Array:\n");
    for (i = 0; i < 5; i = i + 1){
        scanf("%d",&a[i]);
    }

     for (i = 0; i < 5; i = i + 1){
            printf("%d",a[i]);
     }

    return 0;
}
