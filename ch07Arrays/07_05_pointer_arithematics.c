#include <stdio.h>

int main(int argc, char const *argv[])
{
    // int i = 34;
    // int *ptr = &i;

    // printf("The value of ptr i is %u\n", ptr);
    // // ptr = ptr - 1;
    // ptr = ptr + 2;
    // // ptr++;
    // // ptr++;
    // // ptr++;
    // printf("The value of ptr is %u\n", ptr);

    // char i = 34;
    // char *ptr = &i;

    // printf("The value of ptr i is %u\n", ptr);
    // // ptr = ptr - 1;
    // ptr = ptr + 2;
    // // ptr++;
    // // ptr++;
    // // ptr++;
    // printf("The value of ptr is %u\n", ptr);

    float i = 3.4;//float 4 byte ka hota hai
    float *ptr = &i;

    printf("The value of ptr i is %u\n", ptr);
    // ptr = ptr - 1;
    ptr = ptr + 2;
    // ptr++;
    // ptr++;
    // ptr++;
    printf("The value of ptr is %u\n", ptr);

    return 0;
}