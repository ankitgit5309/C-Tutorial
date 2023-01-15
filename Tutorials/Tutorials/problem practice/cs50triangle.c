#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,c;
    // a,b,c=sides of a triangle
    
    do
    {
       printf("Enter the sides of tringle \na:  \nb:  \nc:  ");
    scanf("%d%d%d",&a &b &c);  
    }
    while (a||b||c<0);
   
    return 0;
}