#include<stdio.h>
int main(){
    //Declaring variable
    float basic_salary, dearness_allowance, house_rent_allowance, gross_salary;

    //Get basic salary input from the user
    printf("Enter Ramesh's basic salary : ");
    scanf("%f", &basic_salary);

    //Calculate Dearness Allowance and House Rent Allowance
    dearness_allowance = 0.40 * basic_salary;
    house_rent_allowance = 0.20 * basic_salary;

    //Calculate Gross Salary
    gross_salary = basic_salary + dearness_allowance + house_rent_allowance;

    //Display the calculated gross salary
    printf("Ramesh's Gross Salary : %f", gross_salary);


}
