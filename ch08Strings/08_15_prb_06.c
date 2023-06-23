// Ankit Raj
// Date:  08-03-2023
// Q6. Write a programme to encrypt the given text
#include <stdio.h>
void encrypt(char *c)
{
    char *ptr = c;

    while (*ptr != '\0')
    {
        *ptr = *ptr + 1;
         ptr ++;
    }
}

int main(int argc, char const *argv[])
{
    char c[ ] = "Come to this room";
    encrypt(c);
    printf("Encrypted string is : %s",c);
    return 0;
}