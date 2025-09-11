#include<stdio.h>
int main(){
    //Declaring variable
    float kilometers;
    float meters, feet, inches,centimeters;

    //Taking input in distance in kilometers
    printf("Enter the distance between two cities in kilometers : ");
    scanf("%f",&kilometers);

    //Converts kilometers to meters
    meters = kilometers * 1000;

    //Converts meters to feet
    feet = meters * 3.28084;

    //Convert feet to inches
    inches = feet * 12;

    //Convert kilometers to centimeters
    centimeters = kilometers * 100000;

    //Display the converted distances
    printf("\nDistance in Meters = %f", meters);
    printf("\nDistance in feet = %f", feet);
    printf("\nDistance in inches = %f", inches);
    printf("\nDistance in centimeters = %f", centimeters);


}
