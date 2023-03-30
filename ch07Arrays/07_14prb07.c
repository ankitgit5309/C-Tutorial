// Ankit raj 
// Date-07-02-2023
/*Create an array of size 3X10 counting 
multiplication tables of the numbers 2,7 and 9 respectively.*/
#include<stdio.h>
/// @brief 
/// @param argc 
/// @param argv 
/// @return 
int main(int argc, char const *argv[])
{
    int mulTable[3][10]; 
    for (int i = 0; i < 10; i++)
    {
        mulTable[0][i] = 2*(i+1);
    }
    for (int i = 0; i <10; i++)
    {
       mulTable[0][i] = 7*(i+1);
    }
    for (int i = 0; i < 10; i++)
    {
        mulTable[0][i] = 9*(i+1);
    }
    
    
    printf("The multiplication table is: \n\n");
    for (int  i = 0; i < 10; i++)                   
    {
        printf("2X%d = %d\n",i+1,mulTable[0][i]);
    }
    printf("\n\n");
    for (int i = 0; i < 10; i++)
    {
        printf("7X%d = %d\n",i+1,mulTable[0][i]);
    }
     printf("\n\n");
    for (int i = 0; i < 10; i++)
    {
        printf("9X%d = %d\n",i+1,mulTable[0][i]);
    }
    printf("\n\n");
    
    
    
    return 0;
}