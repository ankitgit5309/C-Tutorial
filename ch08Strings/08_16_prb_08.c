// Date:09-03-2023
// Q8.programme to count the occurence of a given character in a string
#include<stdio.h>
int occurence(char st[],char c)
{
    char *ptr =st;
    int count =0;

    while (*ptr !='\0')
    {
       if(*ptr ==c)
       {
        count ++;
       }
       ptr++;
    }
    return count;
}

int main(int argc, char const *argv[])
{
    char st[]="Ankit8888";
    int count = occurence(st,'8');
    printf("Occurences = %d",count);
    return 0;
}