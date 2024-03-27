/*
program 6
6. Find the Character Is Vowel or Not
*/
#include <stdio.h>

int main() {
    char ch;
    int isVowel = 0;

    printf("Enter a character: ");
    scanf(" %c", &ch);


    ch = tolower(ch);

    
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};

   
    for (int i = 0; i < 5; i++) {
        if (ch == vowels[i]) {
            isVowel = 1;
            break;
        }
    }

    
    if (isVowel) {
        printf("%c is a vowel.\n", ch);
    } else {
        printf("%c is not a vowel.\n", ch);
    }

   
}
