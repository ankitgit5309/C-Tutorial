/*Name-Ankit raj;Date:18-01-2023*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 345;
    int *ptr;
    // This is pointer to pointer variable
    int **ptr_ptr;
    // ptr stores address of i
    ptr = &i;
    // ptr_ptr stores addresss pf ptr
    ptr_ptr = &ptr;

    // to print the value of address pointer

    printf("The value of 'i' is %d ",**ptr_ptr); //'*ptr' value dega ptr ki aur uska vi '*' i ki value de dega;
    return 0;
}