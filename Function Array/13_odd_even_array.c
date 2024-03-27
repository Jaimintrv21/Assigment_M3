/*
	project 13
13.WAP to accept 5 numbers from user and check entered number is even or odd 
using of array

*/
#include <stdio.h>
main()
{
	int i, num[5];
	
	// Get Number From User With Loop
	
	for (i=0;i<5;i++)
	{
		printf("\n\n\t Please Enter Number : ");
		scanf("%d",&num[i]);
	}
	
	// Find Even Number And Print It With loop
	
	printf("\n\n\t Even Numbers");
	for (i=0;i<5;i++)
	{		
		if (num[i]%2==0)
		{			
			printf("\n\t %d",num[i]);
		}
	}
	
	// Find Odd Number And Print It With Loop
	
	printf("\n\n\t Odd Numbers");
	for (i=0;i<5;i++)
	{
		if (num[i]%2!=0)
		{
			printf("\n\t %d",num[i]);
		}
	}
}
