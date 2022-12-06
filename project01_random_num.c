/*Random Number project one
Ankit Raj |Date:30-11-2022|Project-1 
My first game in C programming*/

#include <stdio.h>
#include <stdlib.h> /*to generate random number*/
#include <time.h> 

int main(int argc, char const *argv[])
{
    int number, guess, nguesses = 1;
    srand(time(0));
    number = rand() % 100 + 1; // this will generate random nuber between 1 to 100..
    // 8printf("The number is %d\n", number);
    // keep running the loop until number is guseed
    do
    {
        printf("Guess the nuber between 1 to 100: \n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Enter a lower number please: \n");
        }
        else if (guess < number)
        {
            printf("Enter a greater number please: \n");
        }

        else
        {
            printf("You guessed it in %d attempts: \n", nguesses);
        }
        nguesses++;

    } while (guess != number);

    return 0;
}