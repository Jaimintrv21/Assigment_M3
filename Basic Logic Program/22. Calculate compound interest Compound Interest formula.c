/*
project 22 
22. Calculate compound interest (Compound Interest formula:
a. Formula to calculate compound interest annually is given by:
Amount= P(1 + R/100)t
b. Compound Interest = Amount – P
*/
// a. Formula to calculate compound interest annually is given by:
//Amount= P(1 + R/100)t
#include<stdio.h>
main ()
{
	float amount;
	float p,r,t;
	float compoundinterest;
	printf("Enter the value of p , r and t :");
	scanf("%f %f %f",&p,&r,&t);
	amount = p * (1 + r/100) * t;
	printf("your annually compount interest is :%.2f",amount);
	//b. CompoundInterest = Amount – P
	compoundinterest = amount - p;
	printf("\n your compound interest is :%.2f",compoundinterest);
	
	
 } 
