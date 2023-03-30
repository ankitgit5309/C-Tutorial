// Ankit raj 
// Date:26-01-2023
// Multi-Dimensional Array

#include<stdio.h>

int main(int argc, char const *argv[])
{
    //3 tudets aur 5 sub ka marks input lega
    int n_students = 3;
    int n_subjects = 5 ;
//[3][5]ka 2d array banae hain
    int marks[3][5];
    // har student ke lie ek baar loop karega
    for(int i = 0; i<n_students;i++)
    {
        // har sub ke lie ek baar loop karega 
        for(int j =0; j<n_subjects;j++)
        {
            // particular student ka particular sub me input lega
            printf("Enter the marks of student %d in subject %d: ",i+1,j+1);
            scanf("%d",&marks[i][j]);
        }
    }
    // lia gaya input ko baari baari se print karega 
    for(int i = 0; i<n_students;i++)
    {
        for(int j =0; j<n_subjects;j++)
        {
            printf("\n\nThe marks of student %d in subject %d is :%d\n",i+1,j+1,marks[i][j]);
           
        }
    }
    return 0;
}