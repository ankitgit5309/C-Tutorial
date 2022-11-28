// Chapter 03 Q02 Date:29-10-2022
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int physics, chemistry, maths;
    float total;
   

    printf("Enter marks in maths: ");
    scanf("%d", &maths);
    printf("Enter marks in physics: ");
    scanf("%d", &physics);
    printf("Enter marks in chemistry: ");
    scanf("%d", &chemistry);
     total = (physics + maths + chemistry) / 3;
    if ((total < 40) || maths < 33 || physics < 33 || chemistry < 33)
        
    {
        printf("Your total percentage is %f and you are failed\n ", total);
    }
    else
    {
        printf("Your total percentage is %f and you are pass\n", total);
    }
    return 0;
}