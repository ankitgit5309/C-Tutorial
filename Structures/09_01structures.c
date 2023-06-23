#include <stdio.h>
#include <string.h>
// Employee nam ka ek structure banae hain
struct employee
{
int code; 
float salary;
char name[10];
};

int main(int argc, char const *argv[])
{
    int a = 34;
    char b = 'g';
    float d = 234.3534;
    // employee e1
    // e1 salary  = 34.454; ----->wont work without employee struct.
    struct employee e1;
    e1.code = 100;  // '.'  is member operator
    e1.salary = 34.345;
    // e1.name = "Ankit";------------->won't work.
    strcpy(e1.name,"Harry");
    printf("%d\n",e1.code);
    printf("%s\n",e1.name);
    printf("%f\n",e1.salary);
    return 0;
}