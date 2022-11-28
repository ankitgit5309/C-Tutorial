#include <stdio.h>

int main(int argc, char const *argv[])
{
    int length, breadth;
    printf("What is the lentgh of rectangle\n");
    scanf("%d", &length);
    printf("What is the breadth of rectangle\n");
    scanf("%d", &breadth);
    printf("The area of rectangle is %d", length * breadth);
    return 0;
}