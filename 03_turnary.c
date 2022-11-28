// Ankit Raj: Practice One liner if statement ; Date:27-10-2022
// conditional statements
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    printf("Enter a: ");
    scanf("%d", &a);
// one liner if statement 
    (a < 5) ? printf("A is less than 5") : printf("A is not less than 5");
    return 0;
}