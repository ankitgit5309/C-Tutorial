// Ankit Raj
// Date:18-02-2023

#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{

    char st1[45] = "Hello";
    char *st2 = "Hello";
    /*used yo compare two strings 
    retun zero if strings are equal
    negative if first 
    difference ke hisab se print karta hai > */
    int val = strcmp(st1, st2);
    printf("Now the val is %d", val);

    return 0;
}