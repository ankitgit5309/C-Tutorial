// Ankit Raj |Practice|Date:23-11-2022
// printing of first n natural numbers 
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i=0;
    int n;
    printf("Enter teh value of n\n");
    scanf("%d",&n);
    do
    {
        printf("The number is %d \n",i+1);
        i++;
    } while (i<n);
    
    return 0;
}