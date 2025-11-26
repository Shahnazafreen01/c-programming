#include<stdio.h>

int main(){
    int customerID, units;
    char name[50];
    float chargePerUnit, bill, surcharge = 0.0, totalbill;

    printf("Enter Customer ID: ");
    scanf("%d",&customerID);

    printf("Enter Customer Name: ");
    scanf("%s",name);

    printf("Enter Units Consumed: ");
    scanf("%d",&units);

    if (units <= 199){
        chargePerUnit = 1.20;
    }

        else if (units >= 200 && units <= 399){
            chargePerUnit = 1.50;
        }

        else if (units >= 400 && units <= 599){
            chargePerUnit = 1.80;

        }else{
            chargePerUnit = 2.00;
            }

        bill = units * chargePerUnit;
        printf("Bill = %.2f\n",bill);

        if (bill > 400){
            surcharge = bill * 0.15;
            printf("Surcharge = %.2f\n",surcharge);
        }

        totalbill = bill + surcharge;

        if(totalbill < 100){
            totalbill = 100;
        }

            printf("Total Bill = %.2f\n",totalbill);


            return 0;

}
