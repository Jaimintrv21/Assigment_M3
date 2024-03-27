/*
project 13
13. Write a program in C to remove characters from a string except alphabets.
*/
#include <stdio.h>
main()
{
	int i;
	char str[100],ch;
	
	printf("\n\n\t Please Enter String : ");
	gets(str);
	
	printf("\n\n\t Enter char to remove :");
	scanf("%c",&ch);
	
	for (i=0; str[i] != '\0';i++)
	{
		if(str[i] == ch)
		{
			str[i] = ' ';
		}
	}
	printf("%s",str);
}
