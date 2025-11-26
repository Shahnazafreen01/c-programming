#include<stdio.h>

int main(){
    int n, t, a = 0, b = 0;

    printf("Enter the number:");
    scanf("%d",&n);

    while (n != 0){

        t = n % 10;

        if (t % 2 == 0){

            a = a + 1;
        }else{
            b = b + 1;

        }
        n = n / 10;

    }
        printf("No. of even digits: %d \n",a);
        printf("No. of odd digits: %d \n",b);


}
