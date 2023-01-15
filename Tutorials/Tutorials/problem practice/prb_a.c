/*a.Ramesh’s basic salary is input through the keyboard. His dearness 
allowance is 40% of basic salary, and house rent allowance is 20% of 
basic salary. Write a program to calculate his gross salary.
Ankit Raj |Ekangarsari|27-12-2022|book problem*/ 

#include <stdio.h>


int main(int argc, char const *argv[])
{
    float s, da, hr, gross;
    printf("Enter the basic salary:  ");
    scanf("%f", &s);

    da = 0.4 * s;//islo
    hr = 0.2 * s;
    gross = s + da + hr;

    printf("Your gross salary is :%.2f", gross);
    getch();
    return 0;
}