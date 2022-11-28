// Name:Ankit Raj; Purpose:class work; Date:22-09-2022

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = 2;
    int y = 3;
    printf("The value of 3*x -8*y is %d\n", 3 * x - 8 * y);
    printf("The value of 3*x/8*y is %d\n", 8 * y / 3 * x);
    // 8*3/3*x will give wrong answer 
    // multiplication aur divison left to right associativity follow karte hain 
    // 24/3*2=8*2=16
    // jab oeratiors ki same priority hogi tab peranthesis ke hisab se kaam karega 
    return 0;
}