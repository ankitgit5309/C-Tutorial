// Name: Ankit Raj
// Date: 18-02-2023
// Use of strlen function 
#include <stdio.h>
//exluding null character ye count karta hai
#include <string.h>
int main(int argc, char const *argv[])
{
    char *st = "Harry";
    // count the number of character in string excluding the null character.
    int a = strlen(st);
    printf("The length of string st is %d", a);
    return 0;
}