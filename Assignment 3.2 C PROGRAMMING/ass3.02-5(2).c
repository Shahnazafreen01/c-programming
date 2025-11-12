#include<stdio.h>

int main(){
    int angle1,angle2,angle3,sum;

    printf("Angle 1 = ");
    scanf("%d",&angle1);
    printf("Angle 2 = ");
    scanf("%d",&angle2);
    printf("Angle 3 = ");
    scanf("%d",&angle3);

    sum = angle1 + angle2 + angle3;

    printf("The sum of three triangles: %d\n",sum);

    if(sum == 180){
        printf("The triangle is valid\n");

    }else
        printf("The triangle is not valid\n");

        return 0;
}
