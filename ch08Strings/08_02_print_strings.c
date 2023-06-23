#include <stdio.h>

int main(int argc, char const *argv[])
{
    char str[] = "Ankit" ;
    char str[] = {'A','n','k','i','t',\0};
    char *ptr = str;
    while (*ptr!= '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}