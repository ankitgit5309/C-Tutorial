/*Q1.Create an array of 10 numbers.
Verify using pointer arithematic that (ptr+2) points to the third element
where ptr is a pointer to the past element of the array
Ankit Raj
Array
Date-29-01-2023*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[10];
    int *ptr = arr;
    ptr = ptr + 2;
    if (ptr == &arr[2])
    {
        printf("These point to the same location");
    }
    else
    {
        printf("These does not point to the same location in memory");
    }

    return 0;
}