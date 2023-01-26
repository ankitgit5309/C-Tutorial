#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a=6;
    int *ptr;
    ptr =&a;

    printf("The address of the variable 'a' is %u\n ",ptr);
    printf("The value of variable 'a' is %d\n",*ptr);
    printf("The value of variable 'a' is %d\n",ptr);
    return 0;
}