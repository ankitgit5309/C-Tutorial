// Ankit Raj
// Date:16-02-2023
// 

#include<stdio.h>

int main(int argc, char const *argv[])
{
     char s[34];
    printf("enter your name: ");
    // gets is a function which can be used to recieve a multi word string.
    gets(s);
    // print string and place cursor to next line.
    puts(s);
    //  printf("Your name is %s",s);
    return 0;
}