/*(c) If the marks obtained by a student in five different subjects are
input through the keyboard, write a program to find out the
aggregate marks and percentage marks obtained by the student.
Assume that the maximum marks that can be obtained by a student
in each subject is 10
Ankit Raj |Date-27-12-2022*/

#include <stdio.h>


int main(int argc, char const *argv[])
{
    int hindi, english, maths, science, computer, total;
    float percentage;
    printf("Enter the marks in hindi:  ");
    scanf("%d", &hindi);
    printf("Enter marks in english :  ");
    scanf("%d", &english);
    printf("Enter the marks in maths:  ");
    scanf("%d",&maths);
    printf("Enter the marks in science :  ");
    scanf("%d",&science);
    printf("Enter the marks in computer:  ");
    scanf("%d",&computer);
    total = hindi + english+maths+science+computer;
    printf("Totla Marks obtained by student is:  %d\n", total);
    percentage = total / 5.0;
    printf("Percentage obtained is :  %f\n", percentage);

    return 0;
}