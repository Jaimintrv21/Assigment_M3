/*
project 23 
23. WAP to calculate swap 2 numbers with using of multiplication and division.
*/
#include <stdio.h>

 main()
 {
    int num1, num2;
    
    printf("\n Enter first number: ");
    scanf("%d", &num1);
    printf("\n Enter second number: ");
    scanf("%d", &num2);
    
	 num1 = num1 * num2; 
    num2 = num1 / num2; 
    num1 = num1 / num2;
     
    printf("\n After swapping:\n");
    printf("\nFirst number: %d\n", num1);
    printf("\n Second number: %d\n", num2);
    
    
}

