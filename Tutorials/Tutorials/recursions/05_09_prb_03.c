/*Date:22-12-2022|falling body ka speed|Ankit Raj|Chapter 05 exercise 03|6:40mins*/

#include<stdio.h>
float force(float mass);

int main(int argc, char const *argv[])
{
    float mass;
    printf("Enter the mass of the object in kgs:  ");
    scanf("%f",&mass);
    printf("The value of force in Newton is %.3f \n",force(mass));
    return 0;
}
float force(float mass)
{
    float result =mass*9.8;
    return result;
}