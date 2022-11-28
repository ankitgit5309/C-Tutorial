// write a programme to define the grade of a student based on his marks {refer notes for questions}

// isme thoda kaam baaki hai |Ankit Raj |Date:24-11-2022|Quick Quiz

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int marks;
    printf("Enter your marks: \n");
    scanf("%d", &marks);
    if (marks < 0 || marks > 100)
    {
        printf("Invalid Entry");
    }
    else if (marks < 50)
    {
        printf("Grade F");
    }
    else if (marks >= 50 && marks < 60)
        
    {
        printf("Grade D");
    }
    else if (marks >= 60 && marks < 70)
    {
        printf("grade C");
    }
    else if (marks >= 70 && marks < 80)
    {
        printf("Grade B");
    }
    else if (marks >= 80 && marks < 90)
    {
        printf("Garde A");
    }

    else
    {
        printf("Grade A+");
    }

    return 0;
}