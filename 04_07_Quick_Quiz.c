// isko phir se try karna hai ek baar 
// Logic to print natural numbers from 1 to n
/**
 * C program to print all natural numbers from 1 to n
 */

#include <stdio.h>

int main()
{
    int i, n;

    /* Input upper limit from user */
    printf("Enter any number: ");
    scanf("%d", &n);

    printf("Natural numbers from 1 to %d : \n", n);

    /*
     * Start loop counter from 1 (i=1) and go till n (i<=n)
     * increment the loop count by 1 to get the next value. 
     * For each repetition print the value of i.
     */
    for(i=1; i<=n; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}