/*
project 10
 10.WAP to perform Palindrome number using for loop and function
*/

#include <stdio.h>

int reverse(int);

main()
{
	int num,ans,original;
	
	printf("\n\n\t Please Enter number : ");
	scanf("%d",&num);
	
	original=num;  // store Input Number For Compare
	ans=reverse(num); // store output of function in ans variable	
	
	// check number is palindrom or not
	
	if(original != ans)
	
		printf("\n\n\t Number Is Not Palindrome");
	else
		printf("\n\n\t Number Is Palindrome");
}

// function for reverse number 

int reverse(int n)
{
	int i, 
		rem,
		revers=0;
		
	for(i=0;n != i;n/=10)
	{
		rem = n%10;	
		revers = revers * 10 + rem;	
	}
	return revers;
}
