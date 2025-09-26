#include <stdio.h>

int main(){
    int mathMarks, physicsMarks, chemistryMarks;


    printf("Enter marks in Mathematics:");
    scanf("%d",&mathMarks);

    printf("Enter marks in Physics:");
    scanf("%d",&physicsMarks);

    printf("Enter marks in Chemistry:");
    scanf("%d",&chemistryMarks);

    int totalMarks = mathMarks + physicsMarks + chemistryMarks;
    int mathPhysicsTotal = mathMarks + physicsMarks;

    totalMarks = mathMarks + physicsMarks + chemistryMarks;
    mathPhysicsTotal = mathMarks + physicsMarks;

    printf("Total Marks = %d\n",totalMarks);
    printf("Total Marks (Math + physics)=%d\n",mathPhysicsTotal);

    if (mathMarks >= 65 && physicsMarks >= 55 && chemistryMarks >= 50 &&
       (totalMarks >= 190 || mathPhysicsTotal >= 140)){

        printf("The candidate is eligible for admission.");

       }else{

        printf("The candidate is not eligible for admission.");
       }



}
