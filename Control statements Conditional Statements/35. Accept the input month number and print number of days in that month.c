/*
project 35
35. Accept the input month number and print number of days in that month.
*/
#include <stdio.h>

int main()
 {
    int month_number, days;

    
    printf("Enter the month number (1-12): ");
    scanf("%d", &month_number);

   
    if (month_number == 1 || month_number == 3 || month_number == 5 || month_number == 7 ||
        month_number == 8 || month_number == 10 || month_number == 12) 
        {
        days = 31;
    } 
    else if (month_number == 4 || month_number == 6 || month_number == 9 || month_number == 11)
     {
        days = 30;
    }
     else if (month_number == 2)
      {
        days = 28; // Assuming non-leap year
    } 
    else
     {
        printf("Invalid month number.\n");
       
    }

   
    printf("Number of days in month %d is %d.\n", month_number, days);

 
}
