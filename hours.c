#include<stdio.h>
int main(){
    int totalminutes;
    int hours;
    int remainingminutes;


    printf("Enter the total number of minutes :");
    scanf("%d",&totalminutes);


    hours = totalminutes / 60;
    remainingminutes = totalminutes % 60;
    printf("hours and minutes:\t");
    printf("%d hours \t",hours);
    printf("%d minutes",remainingminutes);






}
