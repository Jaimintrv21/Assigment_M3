/*
project 3
3. WAP to find reverse of string using recursion (function)
*/ 

#include <stdio.h>

void reverse(int);
main()
{
	int num;
	
	printf("\n\n\t Enter The Number for reverse : ");
	scanf("%d",&num);	
	reverse(num);
}
void reverse(int n)
{
	int i,rem;
	for(i=0;i<n;n/=10)
	{
		rem = n%10;
		printf("%d",rem);
	}
}
