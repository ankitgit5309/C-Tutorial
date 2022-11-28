/*Programme to calculate sum of 
N natural numbers 
Ankit raj |Date:26-11-2022|Practice*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i=1,sum,n;
    printf("Enter the numbers you want sums of: ");
    scanf("%d",&n);
    // for(i=0;i<=n;i++){
    //     sum+=i;
    // }
    while (i<=n)
    {
       sum+=i;
       i++;
    }
    
printf("The value of sum is:: %d",sum);
    return 0;
}