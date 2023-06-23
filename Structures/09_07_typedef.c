#include<stdio.h>
#include<string.h>

struct employee{
int code; 
float salary;
char name[20];
}emp;
void show(emp emp1)
{
    printf("The code of employee is:%d\n",emp1.code);
    printf("The salary of employee is:%f\n",emp1.salary);
    printf("The name of employee is:%s\n",emp1.name);
}
int main(int argc, char const *argv[])
{
    // declaring e1 and ptr
    emp e1;
    emp *ptr;

    // pointing ptr to e1 ptr = &e1;
    ptr = &e1;

    // set the number values for e1
    ptr->code =101;
    ptr->salary =11.01;
    strcpy(ptr->name,"Harry");
    return 0;
}