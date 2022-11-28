#include<stdio.h>

int main(int argc, char const *argv[])
{
    int amount;
    float rate,time;
    printf("Enter the amount on which you want to calculate interest = ");
    scanf("%d",&amount);
    printf("Enter the rate of interest = ");
    scanf("%f",&rate);
    printf("Enter the time period in years for interest = ");
    scanf("%f",&time);
    printf("Your simple interest is %f\a", (amount*rate*time)/100);
    printf("\a");

    return 0;
}