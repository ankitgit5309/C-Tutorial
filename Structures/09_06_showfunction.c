#include<stdio.h>
#include<string.h>
 struct employee{
int code; 
float salary;
char name[20];
};
void show(struct emp)
{
    printf("The code of employee is:%d\n",emp.code);
    printf("The salary Of Employee is: %f\n",emp.salary);
    printf("The name of employee is: %s\n",emp.name);
}
int main(int argc, char const *argv[])
{
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;
    ptr ->code =101;
    ptr ->salary =11.01;
    strcpy(ptr->name,"Harry");
    show(e1);
    printf("The code of employee is: %d\n", e1.code);
    
    return 0;
}