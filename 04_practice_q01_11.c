// Write a program to print mutiplication table of given number n
/*Ankit Raj
practice set Q01
Date23-11-2022*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, n;
    printf("Enter the nuber you want multiplication table of: ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d*%d=%d\n", i, n, (n * i));
    }

    return 0;
}