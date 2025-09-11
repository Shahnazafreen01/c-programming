#include<stdio.h>
int main (){
    int hours, minutes, totalminutes;


    printf("Enter hours : ");
    scanf("%d", &hours);

    printf("Enter minutes : ");
    scanf("%d", &minutes);

    totalminutes = (hours * 60) + minutes;

    printf("Total minutes :%d", totalminutes);





}
