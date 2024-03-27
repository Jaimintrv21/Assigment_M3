/*
	project 5
5. Write a program in C to compare two strings without using string library 
   functions.	

*/
#include <stdio.h>

int str_len(char[]);

main()
{
	char str[2][100];
	int i,str0_len,str1_len;
	
	for (i=0;i<2;i++)
	{
		printf("\n\n\t Please Enter String [%d] : ",i+1);
		scanf("%s",&str[i]);
	}
	
	str0_len = str_len(str[0]);
	str1_len = str_len(str[1]);
	
	if (str0_len == str1_len) 
	{
        for (i = 0; i < str0_len; i++) 
		{
            if (str[0][i] != str[1][i]) 
			{
                printf("\n\n\t String Not Match");
                break;
            }
        }
        
        if (i == str0_len) 
		{
            printf("\n\n\t String Match");
        }
    } 
	else 
	{
        printf("\n\n\t String Not Match");
    }
	
}

int str_len(char s[])
{
	int i;
	for(i=0 ; s[i] != '\0' ;i++)
	{
	}
	return i;
}
