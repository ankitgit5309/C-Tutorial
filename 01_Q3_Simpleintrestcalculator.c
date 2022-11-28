// Ankit Raj |Exercise|Date.Rev.:23-11-2022
#include <stdio.h>

int main(int argc, char const *argv[])
{
    // int principal, rate;
    // float  years;
    // printf("Enter your principal amount\n");
    // scanf("%d", &principal);
    // printf("Enter the on which you want the interest\n");
    // scanf("%d", &rate);
    // printf("Enter the time\n");
    // scanf("%f", &years);
    // printf("Your simple interest is %f", (principal * rate * years) / 100);

    int principal, rate;
    float years;
    printf("Enter the principal amount: ");
    scanf("%d", &principal);
    printf("what is interest rate: ");
    scanf("%d", &rate);
    printf("What is tenure for interest: ");
    scanf("%d", &years);
    printf("your simple interest is %f", (principal * rate * years) / 100);
    return 0;
}