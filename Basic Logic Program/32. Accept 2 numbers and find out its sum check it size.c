/*
project 32
32. Accept 2 numbers and find out its sum check it size
*/
#include<stdio.h>
main ()
{
	int num1,num2;
	float sum;
	printf("\nEnter the value of number 1 :");
	scanf("%d",&num1);
	printf("\n Enter the value of number 2 :");
	scanf("%d",&num2);
	
	sum = num1 + num2;
	printf("\n\n\tYour ans is :%f",sum);
	printf("\n\n\t size of sum :%d ",sizeof(sum));
	
	
}
