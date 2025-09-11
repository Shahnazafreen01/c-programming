# include<stdio.h>
int main(){
    // Declare a variable to store the temperature in Centigrade and fahrenheit
float celsius,fahrenheit;
    printf("Enter temperature in centigrade:");
    scanf("%f", &celsius);

    fahrenheit = (9 * celsius)/ 5 + 32;


    printf("%f",fahrenheit);

}
