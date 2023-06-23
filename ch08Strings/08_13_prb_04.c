// Name : Ankit raj
// Date : 08-03-2023
// Q4. Write a function slice to slice a string it should change the origional string such that it is now
// the sliced string take M nad N as the start and ending position from  slice.
// littlr difficult

#include <stdio.h>
void slice(char *st, int m, int n)
{
    int i = 0;
    while ((m+i)<n)
    {
        st[i] = st[i + m];
        i++;
    }
    st[i]='\0';
}
int main(int argc, char const *argv[])
{
    char st[] = "AnkitRaja";
    // do variable pass kie m and n
    slice(st, 1, 5);
    printf("%s", st);
    return 0;
} 