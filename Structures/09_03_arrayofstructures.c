// Name = Ankit Raj
// date = 09.05.2023
// Arrway Of Structures 
#include<stdio.h>
struct employee
{
int code; 
float salary;
char name[10];
};

int main(int argc, char const *argv[])
{
    // 100 employee likhne se badhiya ki ek array bana lunga.
    struct employee facebook[100]; 
    facebook[0].code=100;
    facebook[0].salary =100;
    strcpy(facebook[1].name,"Rohan");
    facebook[1].code=1000;
    facebook[1].salary =1200;
    strcpy(facebook[1].name,"Aman");
    facebook[2].code=1100;
    facebook[2].salary =1010;
    strcpy(facebook[2].name,"Mohan");
    facebook[3].code=1001;
    facebook[3].salary =1090;
    strcpy(facebook[3].name,"Sohan");
    printf("Done");
    return 0;
}