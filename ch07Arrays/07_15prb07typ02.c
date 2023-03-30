// Ankit raj 
// Date-07-02-2023
/*Create an array of size 3X10 counting 
multiplication tables of the numbers 2,7 and 9 respectively.*/


#include<stdio.h>
void printtable(int *mulTable,int num,int n)
{   printf("The multiplication Table of %d is as follows\n\n",num);
    for (int i = 0; i < n; i++)
    {
        mulTable[i]=num*(i+1);
    }
    for (int i = 0; i <n ; i++)
    {
        printf("%dX%d = %d\n",num,i+1,mulTable[i]);
    }
    printf("-----------------------------------------------------");
} 

int main(int argc, char const *argv[])
{
    int mulTable[3][10];
    
    printtable(mulTable[0],2,10);
    printf("\n\n");
    printtable(mulTable[1],7,10);
    printf("\n\n");
    printtable(mulTable[2],9,10);
    
    return 0;
}