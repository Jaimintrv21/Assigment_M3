/*
project 30
30. WAP to convert years into days and days into years
*/
#include <stdio.h>

 main()
 {
    int years, days;

    printf("Enter number of years: ");
    scanf("%d", &years);

    // Convert years to days
    days = years * 365; // Assuming each year has 365 days

    printf("%d years = %d days\n", years, days);

    // Convert days to years
    printf("Enter number of days: ");
    scanf("%d", &days);

    years = days / 365; // Assuming each year has 365 days

    // Display the result
    printf("%d days = %d years\n", days, years);

   
}

