/*
project 1 
1. Write a program to find out the max number from given array using function
*/ 

#include <stdio.h>

void max(int[], int);
main()
{
	int i,num[50],size;
	
	printf("\n\n\t How Many Numbers you want to Enter (max : 50) : ");
	scanf("%d",&size);
	
	for (i=0;i<size;i++)
	{
		printf("\n\t Enter Number %d : ",i+1);
		scanf("%d",&num[i]);
	}
	max(num,size);
}
void max (int n[],int s)
{
	int max = n[0],i;
	for (i=0;i<s;i++){
		if (n[i]> max)
		{
			max = n[i];
		}
	}
	printf("\n\n\t Max Number Is %d",max);
}

