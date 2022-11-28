// Check whether the entered year is leap year or not ; Homework Date:30-10-2022
//  Write a prongram to find a greatest of four numbers enetred by the user ;Homework; Date:31-10-2022

#include <stdio.h>
// #include <conio.h>
int main()
{
    int y;
    printf("Enter the year: ");
    scanf("%d", &y);

    if (y % 4 == 0 || y % 400 == 0 &&y % 100 != = 0)
        
    {
        printf("%d is leap year", &y);
    }

    else
    {
        printf("%d is not a leap year", &y);
    }
    return 0;
}