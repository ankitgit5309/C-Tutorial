// Ankit Raj;CH_03-conditional instructions; Date:02-10-2022
// Programme to check whether a no is evn or odd.
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);

    if(a%2==0){
    printf("%d is even\n",a);
}
else{
   printf ("%d is odd\n",a);
}
    return 0;
}