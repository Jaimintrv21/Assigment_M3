/*
project 15 
15.Store 5 numbers in array and sort it in ascending order

*/ 
#include <stdio.h>

void ascending(int[]);
void p_ascending(int[]);
main()
{
	int i, num[5];
	
	for (i=0;i<5;i++)
	{
		printf("\n\t Enter Number [%d] : ",i+1);
		scanf("%d",&num[i]);
	}
	
		ascending(num);
	
		p_ascending(num);
		
}

// Function For Ascending Numbers 

void ascending(int n[])
{
	int i, j, temp;
	for (i=0;i<5;i++)
	{
		for (j=i+1;j<5;j++)
		{
			if(n[i]>n[j])
			{
				temp = n[i];
				n[i] = n[j];
				n[j]=temp;
			}
		}
	}
}

// Function For Print Ascending Numbers 

void p_ascending(int n[])
{
	int i;
	
	for (i=0;i<5;i++)
	{
		printf("\n\t %d ",n[i]);
	}
}
