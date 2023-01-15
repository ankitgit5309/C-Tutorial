/*Write a programe using recurrsion to calculate nth element of fibbonacci series
Name:Ankit raj |Date-14-01-2023|Fibbonacci series:*/

// recursive strateegy

#include <stdio.h>

int fibo(int num);

    int main(int argc, char const *argv[])
{
    {
        int n;

        printf("Enter: ");
        scanf("%d", &n);
        printf("The %dth terms of fibonacci series are%d\n", n, fibo(n));
        return 0;
    }

    //@brief
    //@param num
    // @return
    int fibo(int num)
    int num;
    {
        if (num <= 0)
        {
            return 0;
        }
        else if (num == 1)
        {
            return 1;
        }

        else
        {
            return fibo(num - 1) + fibo(num - 2);
        }
    }
}
// Iterative strategy
// int main() {
//     int n, i, t1 = 0, t2 = 1, nextTerm;

//     printf("Enter the desired term number: ");
//     scanf("%d", &n);

//     printf("Fibonacci series: ");

//     for (i = 1; i <= n; ++i) {
//          printf("%d, ", t1);
//         nextTerm = t1 + t2;
//         t1 = t2;
//         t2 = nextTerm;
//     }
//     return 0;
// }
//