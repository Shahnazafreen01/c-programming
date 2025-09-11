#include<stdio.h>
#define PI 3.14159
int main(){
    float radius ,volume;
    printf("Enter the radius of the sphere : ");
    scanf("%f",&radius);

     volume = (4 * PI * radius * radius * radius) / 3;


    printf("The volume of the sphere is %f", volume);

}
