#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c, d;
    printf("Enter four numbers: \n");
    scanf("%d %d %d %d", &a & b & c & d);
    if (a > b && a > c && a > d)
    {
        printf("%d is the greatest of four numbers\n", a);
    }
    elseif(b > a && b > c && b > d)
    {
        printf("%d is the greatest of four numbers\n", b);
    }
    elseif(c > a && c > b && c > d)
    {
        printf("%d is the greatest number\n", c);
    }
    elseif(d > a && d > b && d > c)
    {
        printf("%d is the greatest number\n", d);
    }
    // else
    // printf("Invalid input");

    return 0;
}