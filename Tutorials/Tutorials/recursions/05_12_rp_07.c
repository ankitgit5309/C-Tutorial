// Ankit Raj |Date:23-12-2022|Recurssion Printing Star Patterns....

#include <stdio.h>
/// @brief 
/// @param n 
void printpattern(int n);

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the Number:  ");
    scanf("%d",&n);
    printpattern(n);
    return 0;
}
void printpattern(int n)
{
    if (n == 1)
    {
        printf("*\n");
        return;
    }
    printpattern(n - 1);
    for (int i = 0; i < (2*n-1); i++)
    {
        printf("*");
    }
    printf("\n");
}
