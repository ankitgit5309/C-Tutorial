#include<stdio.h>
int sum(int a, int b);
int main(int argc, char const *argv[])
{
   int a =4 ,b=7; //a and b ke jagah X and y karenge to koi bhi farq nahi padega
   printf("The value of 4+7 is %d\n",sum(a,b));
   printf("The value of a and B is %d and %d\n",a,b);

    return 0;
}
int sum(int a,int b)
{ 
    // /yaha pe jo int add kie hain usse koi farq nahi padega
    int c;
    c=a+b;
    b=3434;
    a = 23432;

    return a+b; 
}