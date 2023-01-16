/*Write a recursive function to calculate the sum of first n natural numbers.
problem 06 recurssions|Ankit Raj|*/
#include <stdio.h>
int sum(int num)
{
    if (num)
    {
        return (num + sum(num - 1));
    }
    else
    {
        return 0;
    }
}
int main(int argc, char const *argv[])
{
    int x;
    printf("Enter the number you want the sum till:  ");
    scanf("%d", &x);
    printf("The sum of first %d numbers is %d \n",x,sum(x));
    return 0;
}
