#include <stdio.h>
#include <stdio.h>
// agar ek varible aur ek name chahie to unko to aesehi bana lunga
// lekin agar bahut saara chahie to uske lie struct banana padega
struct employee
{
int code; 
float salary;
char name[10];
};
int main(int argc, char const *argv[])
{
    struct employee e1,e2,e3;
    printf("Enter the value for code of e1: ");
    scanf("%d", &e1.code);
    printf("Enter teh  value of salary of e1: ");
    scanf("%f", &e1.salary);
    printf("Enter the value for name of e1: ");
    scanf("%s", e1.name);

    printf("Enter the value for code of e1: ");
    scanf("%d", &e2.code);
    printf("Enter teh  value of salary of e1");
    scanf("%f", &e2.salary);
    printf("Enter the value fro name of e1: ");
    scanf("%s", e2.name);

    printf("Enter the value for code of e1: ");
    scanf("%d", &e3.code);
    printf("Enter teh  value of salary of e1: ");
    scanf("%f", &e3.salary);
    printf("Enter the value fro name of e1: ");
    scanf("%s", e3.name);
    return 0;
}