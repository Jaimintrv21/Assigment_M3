/*
program 4 
Find Area of Square formula : a = a2
*/
#include<stdio.h>
main()
{
	
float area, a;
// Input side length
printf("Enter the side length of the square: ");
scanf("%f", &a);

// Calculate area
area = a * a;

// Output the area
printf("The area of the square is: %.2f\n", area);
}

