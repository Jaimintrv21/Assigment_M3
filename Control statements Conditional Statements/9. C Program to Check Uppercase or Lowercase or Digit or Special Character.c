/*
project 9
9. C Program to Check Uppercase or Lowercase or Digit or Special Character
*/
#include <stdio.h>

main() 
{
    char ch;

    // Input character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Checking uppercase letter
    if (ch >= 'A' && ch <= 'Z')
        printf("%c is an uppercase letter.\n", ch);
    // Checking lowercase letter
    else if (ch >= 'a' && ch <= 'z')
        printf("%c is a lowercase letter.\n", ch);
    // Checking digit
    else if (ch >= '0' && ch <= '9')
        printf("%c is a digit.\n", ch);
    // Otherwise, it is a special character
    else
        printf("%c is a special character.\n", ch);

}


