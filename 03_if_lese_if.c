// Ankit Raj ; Practice ; Date:26-10-2022

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;

    printf("enter the number:");
    scanf("%d", &num);
    if (num == 1)
    {
        printf("your number is 1");
    }
    else if (num == 2)
    {
        printf("your number is 2");
    }
    else if (num == 3)

    {
        printf("your number is 3");
    }
    else{
        printf("Number is not 1,2 or 3\n");
    }
    return 0;
// }last else is optional it executes only when all conditions fails.