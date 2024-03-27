
/*
program 5
about :-Find Area of Cube formula : a = 6a2
*/
#include<stdio.h>
main()
{
	
float area, a;
// Input side length
printf("Enter the side length of the square: ");
scanf("%f", &a);

// Calculate area
area = 6 * a * 2;

// Output the area
printf("The area of the square is: %.2f\n", area);
}

