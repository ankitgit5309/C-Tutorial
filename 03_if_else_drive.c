//Ankit Raj ; Purpose practice ; Date:26-10-2022

#include <stdio.h>

int main(int argc, char const *argv[])
{ 

    int age;
    int Emergency=0;
    // Emergency=1;

    printf("Enter your age: ");
    scanf("%d", &age);

    if ((age <= 90 && age >= 18)|| Emergency==1)
    {
        printf("You are above 18 and below  90 ;so you can drive\n");
    }
    else
    {

        printf("You cannot drive\n");
     }
    // if (age == 50)
//     {
//         printf("HAlf century completed:\n");
//     }
    return 0;
}