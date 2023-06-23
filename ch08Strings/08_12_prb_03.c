// Name: Ankit Raj
// Date: 08-03-2023
// Q3. Write your own version of strlen function from <string.h>
#include <stdio.h>
int strlen(char *st)
{
    char *ptr = st;
    int len = 0;

    while (*ptr != '\0')
    {
        len++;
        ptr++;
    }
}
int main(int argc, char const *argv[])
{
    char st[] = "Ankit";
    int i = strlen(st);
    printf("The Length of the string is %d", i);
    return 0;
}