/*
project 4 
4. WAP to find factorial using recursio
*/  

#include <stdio.h>

void fact(int);
main()
{
	int num;
	
	printf("\n\n\t Please Enter Number : ");
	scanf("%d",&num);
	
	fact(num);
}
void fact (int n)
{
	int i,fact=1;
	
	for (i=1;i<=n;i++)
	{
		fact = fact*i;
	}
	printf("\n\n\t Factorial Of %d Is : %d",n,fact);
}
