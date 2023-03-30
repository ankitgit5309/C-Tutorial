// Q8. Repeat problem 7 for custom input given by the user.
// Name :Ankit Raj
// Date:!4-02-2023
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("enter the integer you want the table of : \n");
    scanf("%d", &a);
    printf("Enter teh second integer you want the multiplication table of: \n");
    scanf("%d",&b);
    printf("Enter teh third number you want the multiplication table of: \n");
    scanf("%d",&c);
    int mulTable[3][10];
    for (int i = 0; i < 10; i++)
    {
        mulTable[0][i] = a * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        mulTable[0][i] = b * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        mulTable[0][i] = c * (i + 1);
    }

    printf("The multiplication table is: \n\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%dX%d = %d\n", a, i + 1, mulTable[0][i]);
    }
    printf("\n\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%dX%d = %d\n", b, i + 1, mulTable[0][i]);
    }
    printf("\n\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%dX%d = %d\n", c, i + 1, mulTable[0][i]);
    }
    printf("\n\n");
    return 0;
}