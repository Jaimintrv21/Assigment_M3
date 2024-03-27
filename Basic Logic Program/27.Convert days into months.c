/*
project 27
27.Convert days into months
*/
#include <stdio.h>

 main()
 {
    int days, months;


    printf("Enter number of days: ");
    scanf("%d", &days);

    // Convert days to months (assuming 30 days in a month)
    months = days / 30;

    
    printf("Equivalent months: %d\n", months);

   
}

