// Break statemt for dowhile loop 
// Ankit Raj |Class assignment |Date:26-11-2022

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i=0;

    do
    {
        printf("The value of i is %d\n", i);
        
        if (i==4)
        {
            break;
        }
        i++;
    } while (i < 10);
    return 0;
}