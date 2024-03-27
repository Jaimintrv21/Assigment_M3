/*
project 19
19.Calculate compound interest
*/
#include<stdio.h>
main()
{
	float a,b; // main use
	float p,r,n; /* P is the principal amount, 
                r is the annual interest rate ,
                n is the number of years the money is invested for*/
    printf("Enter the principal , annual int rate , number of year the money is invested :");
    scanf("%f %f %f",&p,&r,&n);
    b = (1 + r/100) * n;
    a = p * b;
    printf("your compound interest is :%.2f",b);
    
}
