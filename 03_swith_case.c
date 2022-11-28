// switch case statement Ankit Raj Date.rev:24-11-2022
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int rating;
    printf("Rate from 1-5: ");
    scanf("%d", &rating);
    switch (rating)
    {
    case 1:
        printf("your rating is 1\n");

        break;
    case 2:
        printf("Your rating is 2\n");
        break;
    case 3:
        printf("Your rating is 3\n");
        break;
    case 4:
        printf("Your rating is 4\n");
        break;
    case 5:
        printf("Your rating is 5\n");
        break;
    default:
        printf("your rating is invalid");
        break;
    }
    return 0;
    }