/*Downward pyramid of stars|Name :Ankit raj|Date:-14-01-2023*/
#include <stdio.h>
#include<conio.h>

// int main(int argc, char const *argv[])
// {
//     int n, i;
//     printf("Enter the integer: ");
//     scanf("%d", &n);
//     printf("your entered height is %d", n);
//     for (int i = n; i >= 1; i--)
//     {
//         for (int s = i; s < n; s++)
//         {
//             printf(" ");
//         }
//     }
//     for (int j = 1; j < (2 * i - 1); j++)
//     {
//         printf("* ");
//     // printf("\n");
//     }
//     printf("\n");
//     return 0;

int main()
{
int n, s, i, j;
printf("Enter number of rows: ");
scanf("%d",&n);
for(i = n; i >= 1; i--)
{
//for loop to put space
for(s = i; s < n; s++)
printf("8");
//for loop for displaying star
for(j = 1; j <= (2 * i - 1); j++)
printf("*");
// ending line after each row
printf("\n");
}
return 0;
}