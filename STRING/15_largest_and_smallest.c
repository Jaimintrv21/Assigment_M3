/*
project 15 
 15.Write a program in C to find the largest and smallest words in a string
 */

#include <stdio.h>
#include <string.h>

main() {
    char str[100], word[10][10];
    int i, w = 0, c = 0;
    char smallestWord[10], largestWord[10];

    printf("\n\n\t Please Enter String : ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            word[w][c] = str[i];
            c++;
        } else {
            word[w][c] = '\0';
            w++;
            c = 0;
        }
    }
    word[w][c] = '\0';

    strcpy(smallestWord, word[0]);
    strcpy(largestWord, word[0]);

    for (i = 0; i <= w; i++) {
        if (strlen(word[i]) < strlen(smallestWord)) {
            strcpy(smallestWord, word[i]);
        }
        if (strlen(word[i]) > strlen(largestWord)) {
            strcpy(largestWord, word[i]);
        }
    }

    printf("\n\n\t Smallest word: %s\n", smallestWord);
    printf("\n\n\t Largest word: %s\n", largestWord);

}

