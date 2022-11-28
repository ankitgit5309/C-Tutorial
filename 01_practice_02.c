// Ankit Raj |Area of circle and volume of a cylinder|Date.rev:23-11-2022
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int radius, height;
    float pi=3.14;
    printf("What is the radius of circle\t");
    scanf("%d",&radius); //Upar me jo data denge ye usko scan karne ke lie 
    //%d agar integral value hoga tab ke lie 
    printf("The area of circle is %f\n", pi*radius*radius); //%f ka matlab koi bhi floating point no 

    printf("What is the radius of your cylinder\t");
    scanf("%d",&radius);
    printf("What is the height of your Cylinder\t");
    scanf("%d",&height);
    printf("Volume of cylinder is %f Meter cube",pi*radius*radius*height);
    return 0;
}