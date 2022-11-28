/*Reverse Mulltiplication table of 10 
Ankit raj |Date:26-11-2022|Practice questions */
#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    printf("*****Your multiplication table is*****\n\n");
    for (int i = 10; i; i--){
       
    printf("10 X %d=%d\n",i, 10 * i);
    }
    return 0;
}  