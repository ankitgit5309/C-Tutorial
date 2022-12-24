/*Get input of A characater ,A word ,And a sentence and print it :
Date:24-12-2022|Hackerrank Practice*/

#include <stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>


int main(int argc, char const *argv[])
{
    char ch;
    char s[10];/*Varible defined for character of max length 10*/
    char sen[100];/*Variable defined for character of max length 100*/

    printf("Enter character:  ");
    scanf("%c", &ch);/*To scan the input character */
    printf("Entered character is %c\n", ch);/*To print the character in outputt */

    printf("Enter Word:  ");
    scanf("%s", &s[10]);/*To scant the word in input */
    printf("Enterd word is%s\n", s[10]);/*To print the word in output */

    printf("Enter Sentence:  ");
    scanf("%s", &sen[100]);/*To scan the sentence ininput */
    printf("Your entered sentence is %s\n", sen[50]);/*To print the sentence in output*/

    return 0;
}