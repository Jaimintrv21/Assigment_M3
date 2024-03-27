/*
project 16 
 16.Accept 5 numbers from user and perform sum of array
*/

#include <stdio.h>

main()
{
	int i, num[5],sum=0;
	
	for (i=0;i<5;i++)
	{
		printf("\n\t Please Enter Number [%d] : ",i+1);
		scanf("%d",&num[i]);
		sum += num[i];
	}
	
	printf("\n\n\t Sum Of Array Is : %d",sum);
}
