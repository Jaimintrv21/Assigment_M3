/*
project 3
3. reverse number of string 
*/
#include <stdio.h>

main() {
    int i, size;
    char str[100];
    
    printf("\n\n\t Please Enter String : ");
    
    size = 0;
    for(i=0 ; str1[i] != '\0' ;i++)
	{
		size++;
	}
    
    
    printf("\n\n\t reverse order: ");
    for (i = size - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

}

