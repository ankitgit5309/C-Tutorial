#include <stdio.h>

int main(int argc, char const *argv[])
{
    char ch;
    printf("Enter your desiredd character: \n");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
        printf("Entered character is uppercase!!\n");

    else
        printf("Entered character is lowercase");
    return 0;
}