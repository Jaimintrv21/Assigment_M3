/*
project 14 
14.WAP to find the largest of three numbers.
*/
#include <stdio.h>

main()
 {
    double num1, num2, num3;

    
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

   
    if (num1 >= num2 && num1 >= num3)
	 {
        printf("The largest number is %.2lf\n", num1);
    } 
	 else if (num2 >= num1 && num2 >= num3) {
        printf("The largest number is %.2lf\n", num2);
    }
	 else
	 {
        printf("The largest number is %.2lf\n", num3);
     }

    return 0;
}

