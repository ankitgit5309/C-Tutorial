#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, n;
    printf("Eenter the vlaue of n: ");
    scanf("%d", &n);

    for (int i = n; i; i--)
    {
        printf("%d\n", i);
    }

    return 0;
}