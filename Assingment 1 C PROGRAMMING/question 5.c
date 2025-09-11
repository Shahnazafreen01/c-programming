#include<stdio.h>
int main (){
    float totalSellingPrice;
    float totalProfit;
    float totalCostPrice;
    float costPricePerItem;
    int numberOfItems = 15;

    //Taking input in the total selling price
    printf("Enter the total selling price of 15 items = ");
    scanf("%f", &totalSellingPrice);

    //Taking input in the total profit
    printf("Enter the total profit earned on 15 items = ");
    scanf("%f", &totalProfit);

    //Calculate the total cost price
    totalCostPrice = totalSellingPrice - totalProfit;

    //Calculate the cost price of one item
    costPricePerItem = totalCostPrice / numberOfItems;

    //Print the result
    printf("The cost price of one item is = %f", costPricePerItem);



}
