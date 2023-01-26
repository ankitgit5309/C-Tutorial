/*Name :Ankit Raj |Date-18-01-2023|pointers question 02.*/

#include <stdio.h>

void printAdd(int a)
{
    printf("The value of the address variable si %u\n", &a);
}
int main(void)
{
    int i = 4;
    printf("The value of varible 'i' is %d\n", i);
    printAdd(i);
    printf("The address of variable  i is %u\n", i);
    return 0;
}