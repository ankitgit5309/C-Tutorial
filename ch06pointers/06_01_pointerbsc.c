// Date:03-01-2023|Pointers

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 34;
    int *j = &i; // j will store the address of i
    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", *j);
    // this will give output for memory location
    printf("The addresss of i is %u\n", &i); 
    printf("The address of i is %u\n", j);
    // j a address nikalne ke lie
    printf("The address of j is %u\n", &j);
    printf("The value of j is %u\n",*(&j));
    return 0;
}