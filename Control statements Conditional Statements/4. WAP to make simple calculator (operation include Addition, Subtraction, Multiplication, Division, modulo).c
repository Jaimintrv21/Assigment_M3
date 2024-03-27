/*
project 4
4. WAP to make simple calculator (operation include Addition, Subtraction, Multiplication, Division, modulo)
*/
#include<stdio.h>
main ()
{
//	int a1,a2,a3,a4;
	int num1,num2;
	int sum;
	
	printf("\n--------------------------------------");
	printf("\npress 1 for addtion");
	printf("\npress 2 for subtraction");
	printf("\npress 3 for multiplication");
	printf("\npress 4 for division");
	printf("\npress 5 for modulo");
	printf("\n--------------------------------------");
	printf("\nEnter the number :");
	scanf("%d",&sum);
	sum;
	printf("\nyou have selected this number :%d",sum);
	printf("\n---------------------------------------");
	
	if(sum==1)
	{
		printf("\nenter the int value 1 :");
		scanf("%d",&num1);
		printf("\nenter the int value 2 :");
		scanf("%d",&num2);
		sum = num1 + num2;
		printf("\nyour addtion ans is :%d",sum);
		
	}
	else if (sum==2)
	{
		printf("\nenter the int value 1 :");
		scanf("%d",&num1);
		printf("\nenter the int value 2 :");
		scanf("%d",&num2);
		sum = num1 - num2;
		printf("\nyour subtraction ans is :%d",sum);
	}
	else if (sum==3)
	{
		printf("\nenter the int value 1 :");
		scanf("%d",&num1);
		printf("\nenter the int value 2 :");
		scanf("%d",&num2);
		sum = num1 * num2;
		printf("\nyour multuplication  ans is :%d",sum);
	}
	else if (sum==4)
	{
		printf("\nenter the int value 1 :");
		scanf("%d",&num1);
		printf("\nenter the int value 2 :");
		scanf("%d",&num2);
		sum = num1 / num2;
		printf("\nyour division ans is :%d",sum);
	}
 else if  (sum ==5)
 {
 			printf("\nenter the int value 1 :");
		scanf("%d",&num1);
		printf("\nenter the int value 2 :");
		scanf("%d",&num2);
		sum = num1 % num2;
		printf("\nyour modulo ans is :%d",sum);
 	
 }
 else 
 {
 	printf("\nEXIT");
 	
 }
	
}
