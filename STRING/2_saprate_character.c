/*
project 2
2. Write a program in C to separate individual characters from a string
*/
#include <stdio.h>
main()
{
	char str1[10];
	int i;
	
	printf("\n\n\t Enter Your String : ");
	gets(str1);
	
	for (i=0; str1[i] != '\0'; i++)
	{
		printf(" %c ",str1[i]);
	}
	
}
