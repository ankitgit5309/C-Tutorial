// program to check whether a no is is greater than four numbers
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,c,e;
    printf("Enter the  number \na:");
    scanf("%d",&a);
    printf("b: ");
    scanf("%d",&b);
    printf("c: ");
    scanf("%d",&c);
    printf("d: ");
    scanf("%d",&e);
    
if (a>b&&a>c&&a>e)
{
    printf("%d is the greatest no!",a);

}
if (b>a&&b>c&&b>e)//if b is grater then print b as the greatest number 
{
   printf("%d is the gratest number !",b);//command for printing the value 
}

if (c>a&&c>b&&c>e);//if b is greatest then print respectively 
{
   printf("%d is the greatest number!",c);
}
if (e>a&&e>b&&e>c);
{
   printf("%d is the greatest number!",e);
}

    return 0;
}