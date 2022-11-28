#include <stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int a = 8;
    int b = 9;

    printf("the value of a+b is: %d\n", a + b);
    printf("the value of a-b is: %d\n", a - b);
    printf("the value of a*b is: %d\n", a * b);
    printf("the value of a/b is: %d\n", a / b);

    int z = 72;
    z = b * a; // ye ho sakta hai
    // b*a=z nahi ho sakta hai

    printf("the value of z is: %d\n", z);
    printf("5 when diveided by 3 leaves a reamainder of: %d\n", 5 % 3);
    printf("the product of 4*5 is: %d\n", 4 * 5);
    printf("the value of 4 to the power 5 is : %f\n", pow(4, 5));
    // printf("the product of 4*5 is:%d",4.5); yaha pe point ka matlab ya bracket ka ,atlab multiplication nahi samjha jaega
    // nno operator to perform exponentiation in c 4^5 --> is wrong
    // no operator is assumed to be present
    // aap kisi bhi operator ko assume nahi kia jaa sakt hai

    printf("The value of a+b is: %f\n",6 + 5.6);
    printf("The value of 5/2 is: %d\n",5/2);
   
    printf("The value of 3.0/9 is %f",3.0/9); // Quick quiz
    return 0;
}