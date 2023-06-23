// Ankit Raj
// Date:-16-02-2023
// 

#include<stdio.h>

int main(int argc, char const *argv[])
{
    //This tells the compiler to store in memory  and assigned address is stored in a char pointer
    char *ptr = "Me bhai";
    // yaha pe gadbad karega : it cannot be reinitialised to something else
    char ptr[] = "Me Bhai";
    // ye jabtak nahi execute hoga tabtak ki aap char ptr[] ko comment out na kardo
    ptr = "You bhai";
    printf("%s",ptr);
    return 0;
}