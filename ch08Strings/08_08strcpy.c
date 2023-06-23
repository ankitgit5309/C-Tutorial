// Ankit Raj 
// Use of Function Strcpy

#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char *st = "This";
    char st2[45];
    // Function used to copy the content of second string into first string passed to it 
    // strcpy(target,source)
    strcpy(st2,st);
    printf("Now the st2 is %s",st2);
    return 0;
}  