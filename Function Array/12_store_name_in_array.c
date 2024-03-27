/*
project 12 
12.WAP to accept 5 students name and store it in array
*/ 

#include <stdio.h>

main()
{
	char s_name[5][20];
	int i ;
	
	// Get 5 Names From User With Loop
	
	for (i=0;i<5;i++)
	{
		printf("\n\n\t Please Enter Student [%d] Name : ",i+1);
		scanf("%s",&s_name[i]);
	}

	// Print Student Name
	 
	printf("\n\n\t Student List -: \n \t-----------------------------\n");

	for (i=0;i<5;i++)
	{
		printf("\n\t %d %s",i+1,s_name[i]);
	}
}
