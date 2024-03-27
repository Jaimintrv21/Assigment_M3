/*
project 10 
10. WAP to check whether a number is negative, positive or zero.
*/
#include<stdio.h>
main()
{
	int a;
	printf("Enter the Number :");
	scanf("%d",&a);
	if (a> 0)
	{
		printf("Your number is positive");
	}
	else if (a<0)
	{
		printf("Your number is negative");
	}
	else
	{
		printf("Your number is zero(0)");
	}
}
