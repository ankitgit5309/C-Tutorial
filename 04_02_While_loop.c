#include <stdio.h>

int main(int argc, char const *argv[])
{
   int a;
   a=11;
   while (a>10)
   {
    printf("%d\n",a);//This will lead to an infinite loop.....
   }
   a++;
   

    return 0;
}