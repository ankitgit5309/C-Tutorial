// Ankit Raj
// Date : 18-02-2023
//Use of function strcat jo ki concatinate kar deta hai

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char st1[45] = "Hello";
    char *st2 = "Ankit";
    
// space khatam karne ke lie 
    strcat(st1, st2);/*concatinate karta hai*/
    printf("Now the st1 is %s", st1);

    return 0;
}