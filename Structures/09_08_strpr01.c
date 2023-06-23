// Ankit Raj 
// Date:14-05-2023
/*Q. create a two dimensional vector using structures in c*/

#include<stdio.h>

    struct vector
    {
        int x;
        int y;
    };
int main(int argc, char const *argv[])
{
    struct vector v1,v2;
    v1.x =34;
    v1.y = 54;
    printf("x dim is %d and Y dim is %d\n",v1.x,v1.y);

    v2.x =3345;
    v2.y = 534;
    printf("X dim is %d and Y dim is %d\n",v2.x,v2.y);
    return 0;
}