/*
project 8
8. WAP to accept the height of a person in centimeters and categorize the person according to their height.
*/
#include<stdio.h>
main()
{

int a,b;
printf("Enter the height of the person :");
scanf("%d",&a);

if (195<= a)
	{
	printf("\n\n\t nice keep it up");
	}
	else if (185<= a)
	{
		printf("it ok to be small ");
		
	}
	else if (175<= a)
	{
		printf("short");
	}
	else
	{
		printf("\nyour are too short... ");
		printf("\ngrow your height");
	}
}

