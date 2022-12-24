/*Ankit Raj |Date:22-12-2022|Ankit Raj |
arguments kis order me  pass hoga vo compliler pe depend karta hai*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 3;
    printf("%d%d%d", a++, ++a, a);//isme compiler ke behaviour ke hisab se execute hoga 
    return 0;
} 