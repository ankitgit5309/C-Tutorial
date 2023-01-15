/*Making of upper pointing pyramid in c
Name: Ankit Raj|Source internet|Date-14-01-2023*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the number to print:   ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int s = i; s < n; s++)
        {
            printf(" ");
        }
    
    
        for (int j = 0; j < (2*i-1); j++)
        {
            printf("*");     
        }
        printf("\n");
       
    }
    return 0;
}