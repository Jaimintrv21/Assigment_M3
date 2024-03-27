/*
	project 12
12. Write a program in C to find the number of times a given word 'is' appears in 
	the given string.

*/

#include <stdio.h>
#include <string.h>

main()
{
	char str[100],word[100];
	
	printf("\n\n\t Please Enter String : ");
	gets(str);
	
	printf("\n\n\t Entre Word To find In String : ");
	gets(word);
	
	if(strstr(str,word))
		printf("\n\n\t Word Found");
	else
		printf("\n\n\t Word Not Found");
}

