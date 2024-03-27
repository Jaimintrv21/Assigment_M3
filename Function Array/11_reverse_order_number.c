/*
	project 11
11. WAP to accept 5 numbers from user and display in reverse order using for 
	loop and array

*/

#include <stdio.h>
main()
{
	int i, num[5];
	
	// Get 5 numbers from user with loop
	
	for (i=0;i<5;i++)
	{
		printf("\n\n\t Please Enter Num %d : ",i+1);
		scanf("%d",&num[i]);
	}
	
	// print array in reverse order using decriment
	
	for (i=4;i>=0;i--)
	{
		printf("\n\n\t %d",num[i]);	
	}
}
