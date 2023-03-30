/*Q1. Write a programme to create an array of 20 integers and store a multiplication table of 5 in it.
Name:-Ankit Raj
Date:- 29-01-2023
Arrays*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    // int mul[10];
    // for (int i = 0; i < 10; i++)
    // {    //edit make desired input table 
    //      mul[i] = 5*(i+1);
    // }
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("5X%d=%d\n",i+1,mul[i]);
    // }
    int mul[10];
        for (int i = 0; i < 10; i++)
        {
           mul[i] = 5*(i+1);
        }
        for (int i = 0; i < 10; i++)
        {
            printf("5X%d = %d\n",i+1,mul[i]);
        }
        
        
    return 0;
}