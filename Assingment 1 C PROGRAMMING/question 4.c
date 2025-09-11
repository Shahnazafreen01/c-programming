#include<stdio.h>
int main(){
    int subject1, subject2, subject3, subject4, subject5;
    int aggregate_marks;
    float percentage;

    //Taking input marks for five subjects
    printf("Enter marks for subject1 = ");
    scanf("%d",&subject1);

    printf("Enter marks for subject2 = ");
    scanf("%d", &subject2);

    printf("Enter marks for subject3 = ");
    scanf("%d",&subject3);

    printf("Enter marks for subject4 = ");
    scanf("%d", &subject4);

    printf("Enter marks for subject5 = ");
    scanf("%d", &subject5);

    //Calculate Aggregate Marks
    aggregate_marks = subject1 + subject2 + subject3 + subject4 + subject5;

    //Calculate Percentage
    //Total maximum marks for five subjects is 5 * 100 = 500
    percentage = (float)aggregate_marks / 500 * 100;

    //Print the resulta
    printf("\nAggregate Marks = %d", aggregate_marks);
    printf("\nPercentage = %f", percentage);

}

