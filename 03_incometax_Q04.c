// Q04 Income tax Ankit Raj Date:29-10-2022;
#include<stdio.h>

int main(int argc, char const *argv[])
{
    float tax =0,income;
    printf("Enter your income: ");
    scanf("%f",&income);

    if (income>=250000 &&income<=500000)
    {
        tax=tax+0.05+(income-250000);
    }
    if (income>=500000 &&income<=1000000)
    {
       tax=tax+0.20+(income-250000);
    }
    if (income>=1000000 )
    {
       tax=tax+0.30+(income-250000);
    }
    printf("Your total tax to be baid is %f: ",tax);
    
    return 0;
}