// Ankit Raj |Practice class|Date:23-11-2022

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int skip = 5, i = 0;//skit ka matlab isko print karna hai 
    while (i < 10)
    /*yaha pe 5 ko print karega 
    sirf ye kyuki usi ke commands die gae hain*/
    {
        i++;
        if (i != skip)
        /*agar i skip ke barabar nahi hoga 
        to continue kar dehga aur agar barabar ho gya 
        to print karwa dega */
        {
            continue;
        }
    
    else
    {
        printf("%d\n", i);
    }
    }
    return 0;
}