/*
	project 2
	2. WAP of Addition, Subtraction, Multiplication and Division using Switch 
	   case.(Must Be Menu Driven)

*/
#include <stdio.h>

void addition(int,int);
void Subtraction(int,int);
void Multiplication(int,int);
void Division(int,int);

main()
{
	int n1,n2,choise;
	
	printf("\n\n\t Enter two Numbers Using Space : ");
	scanf("%d %d",&n1,&n2);
	
	printf("\n\n\t Enter Your choise : ");
	printf("\n\t ------------------------- ");
	printf("\n\n\t '+' - Addition");
	printf("\n\n\t '-' - Subtraction");
	printf("\n\n\t '*' - Multiplication");
	printf("\n\n\t '/' - Division");
	
	printf("\n\n\t Please Select Your Choise : ");
	scanf(" %c",&choise);
	
	switch (choise)
	{
		case '+':
			addition(n1,n2);
			break;
		case '-':
			Subtraction(n1,n2);
			break;
		case '*':
			Multiplication(n1,n2);
			break;
		case '/':
			Division(n1,n2);
			break;
		default : 
			printf("\n\n\t invalid Input");	
			break;
	}	
}
void addition(int nu1,int nu2)
{
	printf("\n\n\t%d + %d = %d",nu1,nu2,nu1+nu2);
}
void Subtraction(int nu1,int nu2)
{
	printf("\n\n\t%d - %d = %d",nu1,nu2,nu1-nu2);
}
void Multiplication(int nu1,int nu2)
{
	printf("\n\n\t%d x %d = %d",nu1,nu2,nu1*nu2);
}
void Division(int nu1,int nu2)
{
	printf("\n\n\t%d / %d = %d",nu1,nu2,nu1/nu2);
}

