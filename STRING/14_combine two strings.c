/*
project 14
14.Write a program in C to combine two strings manually 
*/
#include <stdio.h>

int main() {
    char str1[100], str2[100], combined[200];
    int i, j;

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    for (i = 0; str1[i] != '\0'; i++) 
    {
        combined[i] = str1[i];
    }

    
    for (j = 0; str2[j] != '\0'; j++) {
        combined[i + j] = str2[j];
    }
    combined[i + j] = '\0';

    printf("Combined string: %s\n", combined);

   
