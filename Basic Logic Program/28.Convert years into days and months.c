/*
project 28 
28.Convert years into days and months

*/
#include <stdio.h>

 main()
 {
    int years, months, days;

 
    printf("Enter number of years: ");
    scanf("%d", &years);

    // Convert years to months and days
    months = years * 12;  // Each year has 12 months
    days = years * 365;   // Assuming each year has 365 days


    printf("Equivalent: %d years = %d months + %d days\n", years, months, days);

   
}

