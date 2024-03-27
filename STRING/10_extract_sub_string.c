/*
project 10 
10. Write a program in C to extract a substring from a given string
*/

#include <stdio.h>
#include <string.h>
main()
{
	int i,start,end,lenth;
	char str[100],sstr[100];
	
	printf("\n\n\t Please Entre String : ");
	gets(str);
	
	lenth = strlen(str);
	printf("\n\n\t Enter Starting index : ");
	scanf("%d",&start);
	
	printf("\n\n\t Enter Ending index : ");
	scanf("%d",&end);
	
	if (start < 0 || end >= lenth || start > end) {
        printf("\n\n\t Invalid indices.\n");
        return 1;
    }
	
	for (i=start;i<=end;i++)
	{
		sstr[i-start] = str[i]; 
	}
	printf("\n\n\t Substring: %s\n", sstr);
}
