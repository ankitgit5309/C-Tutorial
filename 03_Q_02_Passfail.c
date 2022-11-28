// Ankit Raj |Assignment|Date:24-11-2022
// dont know why the compilation is terminated 
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int s1, s2, s3;
    int total = s1 + s2 + s3;
    float per = total % 3;

    printf("Enter your marks in subject s1: ");
    scanf("%d", &s1);
    printf("Enter your marks in subject s2: ");
    scanf("%d", &s2);
    printf("Enter your marks in subject s3: ");
    scanf("%d", &s3);
    printf("your total marks is %d \n",total);
    printf("Your percentage is %f \n",per);
    if (s1 >=  33 && s2 >=  33 && s3 >=  33)
    {
        printf("Your are pass!!\n");
    }
    else if (per >=  40)
    {
        printf("You are pass!!\n");
    }
    else
    {

        printf("you are fail:");
    }
    

    return 0;
}