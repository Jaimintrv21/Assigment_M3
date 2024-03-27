/*
project 9 
9. Write a program in C to find the maximum number of characters in a string.
*/
#include <stdio.h>
main()
{
	int i, j,count=0;
	char str[100];
	char maxChar;
    int maxCount = 0,currentCount = 0;
	
	printf("\n\n\t Please Enter String : ");
	gets(str);

	for (i=0;str[i] != '\0';i++)
	{
		if(str[i] != ' ')
		{
			currentCount = 1;
		for (j=i+1;str[j] != '\0';j++)
		{
			if(str[j] == str[i])
			{
				currentCount++;
			}
		}
		if (currentCount > maxCount) {
                maxCount = currentCount;
                maxChar = str[i];
            }
		}
	}
	
	printf("\n\n\t Maximum charater is %c apears %d time \n",maxChar, maxCount);
}
