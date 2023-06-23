// Name=Ankit Raj
// Date=09.05.2023
#include<stdio.h>
#include<string.h>
struct employee{
    int code; 
float salary;
char name[20];
};
int main(int argc, char const *argv[])
{
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;
    // (*ptr).code =101;//can also be written as  ptr->code=101;
    ptr->code=101;
    printf("%d",e1.code);
    return 0;
}