/*
project 34 
34. Accept month number and display month name
*/
#include <stdio.h>

int main()
 {
    int month_number;

    
    printf("Enter the month number (1-12): ");
    scanf("%d", &month_number);

   
    if (month_number == 1) {
        printf("Month name for month number %d is January.\n", month_number);
    } else if (month_number == 2) {
        printf("Month name for month number %d is February.\n", month_number);
    } else if (month_number == 3) {
        printf("Month name for month number %d is March.\n", month_number);
    } else if (month_number == 4) {
        printf("Month name for month number %d is April.\n", month_number);
    } else if (month_number == 5) {
        printf("Month name for month number %d is May.\n", month_number);
    } else if (month_number == 6) {
        printf("Month name for month number %d is June.\n", month_number);
    } else if (month_number == 7) {
        printf("Month name for month number %d is July.\n", month_number);
    } else if (month_number == 8) {
        printf("Month name for month number %d is August.\n", month_number);
    } else if (month_number == 9) {
        printf("Month name for month number %d is September.\n", month_number);
    } else if (month_number == 10) {
        printf("Month name for month number %d is October.\n", month_number);
    } else if (month_number == 11) {
        printf("Month name for month number %d is November.\n", month_number);
    } else if (month_number == 12) {
        printf("Month name for month number %d is December.\n", month_number);
    } else {
        printf("Invalid month number.\n");
    }

   
}
