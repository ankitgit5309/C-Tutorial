//Ankit Raj 
// Date:15-05-2023
/*Write a function sum vector which returns the sum of two vectors passed to it. 
The vectors must be two dimensional*/
#include<stdio.h>
  struct vector
    {
        int x;
        int y;
    };

    struct vector sumvector (struct vector v1,struct vector v2)
   { struct vector result;
    result.x = v1.x +  v2.x;
    result.y = v1.y + v2.y;
    return result;
   }
int main(int argc, char const *argv[])
{
     struct vector v1,v2,sum;
    v1.x =34;
    v1.y = 54;
    printf("x dim is %d and Y dim is %d\n",v1.x,v1.y);

    v2.x =3345;
    v2.y = 534;
    printf("X dim is %d and Y dim is %d\n",v2.x,v2.y);
    sum = sumvector(v1,v2);
    printf("X dim of result is %d and Y dim of result is %d\n",sum);
    return 0;
    
 
}