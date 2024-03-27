/*
project 11
11. Write a program in C to read a sentence and replace lowercase characters with 
uppercase and vice versa.
*/
#include <stdio.h>
main()
{
	int i,ascci;
	char str[100];
	printf("\n\n\t Please Enter String : ");
	gets(str);
	
	
	for (i=0; str[i] != '\0';i++)
	{
		if (str[i]>'a' && str[i] < 'z')
		{
			str[i] = str[i]- 32; 
		}
		else
		{
			str[i] = str[i] + 32; 
		}
	}
	
	printf("\n\n\t Converted String: %s\n", str);
}
