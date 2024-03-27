/*
project 4
4. Write a program in C to count the total number of words in a string.
*/ 

#include <stdio.h>
main()
{
	char str[100];
	int i, word=0;
	
	printf("\n\n\t Please Enter String : ");
	gets(str);
	
	for (i=0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			word--;
		}
		word++;
	}
	printf("\n\n\t Total %d Words",word);
}

