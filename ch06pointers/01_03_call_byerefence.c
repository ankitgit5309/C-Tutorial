// Ankit Raj |Date-17-01-2023|Call by refence 
#include<stdio.h>

void wrong_swap(int a, int b);
void swap(int *a , int *b);

int main(int argc, char const *argv[])
{
    int x=3,y=4;
    printf("The value of 'x' and 'y' is %d and %d \n\n",x,y);
    // wrong_swap  (x,y); //will not work due to call by value 
    swap(&x,&y);//will work due to call by reference. 
    printf("The value of 'x' and 'y' after swap is %d and %d\n\n",x,y);
    return 0;
}
void wrong_swap(int a, int b)
{
    int temp;
    temp =a ;
    a=b;
    b=temp;

}
void swap(int *a ,int *b)
{
int temp;
temp =*a;
*a =*b;
*b =temp;
}


