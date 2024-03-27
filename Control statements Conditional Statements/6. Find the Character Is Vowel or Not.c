/*
project 6
6. Find the Character Is Vowel or Not
*/
#include <stdio.h>
\

int main() {
    char character;
    
   
    printf("Enter a character: ");
    scanf(" %c", &character);
    
    if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u') {
        printf("%c is a vowel.\n", character);
    } else {
        printf("%c is not a vowel.\n", character);
    }

    return 0;
}

