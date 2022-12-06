/*Programme to identify whether a number uis prime or not
Ankit raj |Date:30-11-2022|Class work*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n = 14, prime = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 0 && n != 2)
    {
        printf("This is not a prime number");
    }
    else
    {
        printf("This is a prime number");
    }
    return 0;
}