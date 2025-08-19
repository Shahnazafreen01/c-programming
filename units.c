#include<stdio.h>
int main (){
     int n;
printf("enter a number");
scanf("%d",&n);

 if(n<200){
printf("bill=n*2");
 }else if (n>200 && n<=300){
    printf("bill=200*2+(n-200)*4");
 }else if (n>300 && n<=400){
printf("bill=200*2+100*4+(n-300)*5");
 }else{

    printf("x=200*2+100*4+100*5+(n-400)*7");

    printf("s=(x*10)/100");
    printf("bill=x+s");

 }

}
