/*
	project 8
8. Write a program in C to count the total number of vowels or consonants in a 
string.

*/
#include <stdio.h>
main()
{
	int i,vowel=0, cons=0;
	char str[100];
	
	printf("\n\n\t Please Enter String : ");
	gets(str);
	
	for(i=0; str[i] != '\0';i++)
	{
		if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ||
            str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') 
		{
			vowel++;	
		}
		else
		{
			cons++;
		}	
	}
	printf("\n\n\t Vowels = %d",vowel);
	printf("\n\n\t Cons = %d",cons);
}
