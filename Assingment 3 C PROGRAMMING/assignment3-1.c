#include<stdio.h>

int main(){
   int year;

   //Prompt the user to input a year.
   printf("Enter a year:");
   scanf("%d",&year);


   //Check if the year is a leap year based on rules.
   //A year is a leap year if:
   //-It is divisible by 4, AND
   //-If it is a century year (ending in 00), it must also be divisible by 400.
   if (year%4 == 0){
    printf("%d is a leap year\n",year);

   }else if (year%100 == 0){
       printf("%d is not a leap year\n",year);

   }else if (year%400 == 0){
       printf("%d is a leap year\n",year);

   }else{
       printf("%d is not a leap year\n",year);

   }
}
