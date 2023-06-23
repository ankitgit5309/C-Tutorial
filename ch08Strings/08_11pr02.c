// write a programme to take string as an input from the user using %c and %s confirm the the strings are equal
// Ankit Raj
// Date:- 21-02-2023
// little difficult
#include <stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char st1[34];
    char st2[34];
    int i = 0;
    char c;
    printf("Enter the value of first string\n");
    scanf("%s", st1);

    // character ko input le lia user se
   
    // Pichle scanf me jo character daala hai usko flush karne ke lie use karenge 
    printf("Enter the Value of second String char-by-char\n");
    // fflush(stdin);
    // scanf("%c", &c);
    while (c != '\n')
    {
        fflush(stdin);
        scanf("%c", &c);
        st2[i] = c;
        i++;
    }
    st2[i-1] = '\0';

    printf("The value of st1 is %s\n", st1);
    printf("The value of st2 is %s\n", st2);
    printf("strcmp for these strings return %d",strcmp(st1,st2));
    return 0;
}