/*Problem 01 chapter 05 Name :Ankit raj */
#include <stdio.h>
float average(int a, int b, int c);
int main(int argc, char const *argv[])

{
    int a, b, c;

    printf("Enter a: \n");
    scanf("%d", &a);
    printf("Enter b: \n");
    scanf("%d", &b);
    printf("Enter c: \n");
    scanf("%d", &c);

    printf("The average value is %f", average(a, b, c));
    return 0;
}
float average(int a, int b, int c)
{
    float result;
    result = (a + b + c) / 3;
    return result;
}