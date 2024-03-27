/*
project 31 
31. Write a program in C to read any Month Number in integer and display the number of days for this month.
*/
#include <stdio.h>

 main()
 {
    int month;

    
    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    if (month < 1 || month > 12) {
        printf("Invalid month number.\n");
    } else {
       
        int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

       
        printf("Number of days in month %d is %d.\n", month, days_in_month[month - 1]);
    }

    
}
