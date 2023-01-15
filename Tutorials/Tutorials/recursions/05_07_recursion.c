/*Ankit Raj|date:19-12-2022|recursion*/
/*recusrion matlab function ke andar wahi function;6 hr 31 mins*/
#include <stdio.h>

int factorial(int x);
int main(int argc, char const *argv[])
{
    int a = 7;
    printf("The value of factorial %d is %d", a, factorial(a));
    return 0;
}
int factorial(int x)
{
    printf("Calling factorial(%d)\n\n ", x);
    if (x == 1 || x == 0)
    {
        return 1;
    }
    else
    {
        return x * factorial(x - 1);
    }
}