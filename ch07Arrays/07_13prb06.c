// Write a programme contaning functions which counts the number of positive integers in an array.
// Name : Ankit Raj 
// Date - 09-02-2023
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int arr[]= {1,2,3,4,-1,-2,-3,-4};
    int n = sizeof(arr)/sizeof(arr[0]);
    Printarray(arr,n);
    printf("Count of Positive integers are:%d \n",countPositiveint(arr,n));
    printf("Count of Negative integers:%d \n",countNegativeint(arr,n));
    return 0;
}
int countNegativeint(int *arr,int n)
{
    int Negativeint = 0; 
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<0)
        {
            Negativeint++;
        }
    }
    return Negativeint;
}
int countPositiveint(int *arr,int n)
{
    int Positiveint = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>0)
        {
           Positiveint++;
        }
    }
   return Positiveint; 
}
void Printarray (int *arr,int n)
{
    int i;
    printf("Array:  ");
    for (int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}