/*Ankit Raj |Practice of if 
logical operators|Date:24-11-2022
*/ 
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int age;

    printf("what is your age: ");

    scanf("%d",& age);
    
    if (age <=70 && age >=18)
    {
        printf  ("You are above 18 and below 70, so you can drive\n");

    }

    else
    {
        printf("you cannot drive");

    }
    return 0;

}