/*(b) The distance between two cities (in km.) is input through the
keyboard. Write a program to convert and print this distance in
meters, feet, inches and centimeters
Ankit Raj  |Date_27-12-2022*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    float distance;
    printf("Enter the distance in km: ");
    scanf("%f", &distance);

    printf("Distance in meter is: %f\n", distance * 1000);
    printf("Distance in feets is: %f\n", distance * 3280.84);
    printf("Distance in inches is: %f\n", distance * 39370.1);
    printf("Distance in centimeters is: %f\n", distance * 100000);

    return 0;
}