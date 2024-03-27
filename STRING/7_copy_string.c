/*
project 7 
7. Write a program in C to copy one string to another string.
*/ 

#include <stdio.h>

void copystr(char[],char[]);

main()
{
	char str[100],str2[100];
	
	printf("\n\n\t Please Enter String : ");
	gets(str);
	
	copystr(str,str2);
	
	printf("\n\n\t Copied String: %s\n", str2);
	
}
void copystr(char s[], char d[])
{
	int i;

	for(i=0; s[i] != '\0';i++)
	{
		d[i] = s[i];
	}
}
