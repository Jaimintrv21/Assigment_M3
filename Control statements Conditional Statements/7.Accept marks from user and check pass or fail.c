
/*
project 7
7.Accept marks from user and check pass or fail
*/


#include<stdio.h>
main()
{
	int a,b,c,d;
	float total;
	printf("Enter the mark of the subject 1 : ");
	scanf("%d",&a);
	printf("Enter the mark of the subject 2 : ");
	scanf("%d",&b);
	printf("Enter the mark of the subject 3 : ");
	scanf("%d",&c);
	printf("Enter the mark of the subject 4 : ");
	scanf("%d",&d);
	
	total = (a + b + c +d) / 4;
	printf("Your total mark are :%.2f",total);
	if(total >= 40)
	{
	
	
		printf("your are pass ");
	}
	else
	{
		printf("sorry you are fail");
	}
	
}
