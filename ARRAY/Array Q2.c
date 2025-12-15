#include<stdio.h>

int main(){
    int n,i;
    int a[n];

    printf("Enter the size of Array: ");
    scanf("%d",&n);

    for (i = 0; i <= n; i++ ){
        scanf("%d",&a[i]);
    }
    printf("Reverse: ");
    for (i = n; i >= 0; i--){
        printf("%d",a[i]);
    }
    return 0;
}
