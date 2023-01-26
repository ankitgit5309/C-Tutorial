/*Name Ankit Raj |Date 18-01-2023|Que-04 Pointers */
#include <stdio.h>

void sumAndAvg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = *sum / 2.0;
}

int main(int argc, char const *argv[])
{
    int i, j, sum;
    float avg;
    i = 3;
    j = 6;
    sumAndAvg(i, j, &sum, &avg);
    printf("the value of sum is %d\n", sum);
    printf("The value of avg is %f\n", avg);
    return 0;
}