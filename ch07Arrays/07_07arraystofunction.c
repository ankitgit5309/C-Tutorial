#include <stdio.h>
// void printArray(int *ptr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("The value of element %d is %d\n", i + 1, *(ptr + i));
//     }
// }

void printArray(int ptr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is %d\n", i + 1, ptr[i]);
    }
    ptr[2] = 555; //aisa karne se main me jo array banae hai uske 3rd element ke jagah ye print hoga
}
int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 3453, 4545, 3, 645};
    printArray(arr, 7);
    printf("%d",arr[2]); //changed value ko print karwane ke lie 
    return 0;
}