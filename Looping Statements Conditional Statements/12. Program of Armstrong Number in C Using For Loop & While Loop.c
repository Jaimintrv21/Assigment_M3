/*
project 12
Program of Armstrong Number in C Using For Loop & While Loop
*/
#include<stdio.h>
int main()

{ 
	int n, sum=0, rem, original;
	
	printf("\n\n\t Input the number : ");
	scanf("%d",&n);  
	
	original=n;
	
	while(n>0)
	{
		rem=n%10;  
		sum=sum+(rem*rem*rem);
		//printf("%d",rem);  
		n=n/10; 
	}
	
	if(original==sum)
		printf("\n\n\t It is an armstrong... ");
		
	else
		printf("\n\n\t It is not armstrong number...");
}