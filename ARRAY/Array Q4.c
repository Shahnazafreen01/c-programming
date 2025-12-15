#include<stdio.h>

int main(){
    int a[4];
    int i;

    printf("Enter the numbers:\n");
    for (i = 0; i < 4; i = i + 1){
        scanf("%d",&a[i]);
    }

    printf("Even numbers: ");
    for ( i = 0; i < 4; i = i + 1){

        if ( a[i] % 2 == 0){
            printf("%d\n",a[i]);
        }
    }
    return 0;

}
