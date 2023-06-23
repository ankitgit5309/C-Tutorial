// Ankit Raj
// Date : 09-03-2023
// Q7. Decrypt the encrypted message.

#include <stdio.h>
void decrypt(char *c)
{
    char *ptr = c;

    while (*ptr != '\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
}

int main(int argc, char const *argv[])
{
    char c[] = "Dpnf!up!uijt!sppn";
    decrypt(c);
    printf("Decrypted string is : %s", c);
    return 0;
}
