#include<stdio.h>

int main(){
    int cp, sp, difference;

    printf("Enter the Cost Price:");
    scanf("%d",&cp);

    printf("Enter the Selling Price:");
    scanf("%d",&sp);

    difference = sp - cp;
    printf("Difference: %d\n",difference);

    if (sp > cp) {
        printf("Profit");

    }else if (sp < cp) {
        printf("Loss");

    }else{
        printf("No profit, No loss");
    }
}
