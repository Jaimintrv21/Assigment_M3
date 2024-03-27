/*
project 21
21. Accept 2 numbers from user and swap 2 numbers with using 3rd variable and without using 3rd variable


*/
#include <stdio.h>

 main()
 {
    int num1, num2;
    
    printf("\n Enter first number: ");
    scanf("%d", &num1);
    printf("\n Enter second number: ");
    scanf("%d", &num2);
    
	 num1 = num1 + num2; 
    num2 = num1 - num2; 
    num1 = num1 - num2;
     
    printf("\n After swapping:\n");
    printf("\nFirst number: %d\n", num1);
    printf("\n Second number: %d\n", num2);
    
    
}
