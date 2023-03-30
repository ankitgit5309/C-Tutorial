// Repeat problem 3 fro a grneral input provided by the user using scanf.
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    int mul[10];
    printf("Enter the number: ");
    scanf("%d",&n);
    // printf("The multiplication table of %d is:  \n\n ",n);
        for (int i = 0; i < 10; i++)
        {
           mul[i] = n*(i+1);
        }
        for (int i = 0; i < 10; i++)
        {
            printf("%dX%d = %d\n",n,i+1,mul[i]);
        }
    return 0;
}