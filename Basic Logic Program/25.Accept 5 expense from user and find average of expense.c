/*
project 25 
25.Accept 5 expense from user and find average of expense
*/
#include<stdio.h>
main()
{
	float exp1,exp2,exp3,exp4,exp5,a;
	printf("Enter the expense from for user :");
	scanf("%f%f%f%f%f",&exp1,&exp2,&exp3,&exp4,&exp5);
	a = exp1 + exp2 + exp3 + exp4 + exp5 / 5;
	printf("Your avg is :%f",a);
	
}

