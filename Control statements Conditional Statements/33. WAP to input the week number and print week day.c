/*
project 33
33. WAP to input the week number and print week day.
*/
#include <stdio.h>

int main()
 {
    int week_number;

    
    printf("Enter the week number (1-7): ");
    scanf("%d", &week_number);

    
    if (week_number == 1) {
        printf("Weekday for week number %d is Sunday.\n", week_number);
    } else if (week_number == 2) {
        printf("Weekday for week number %d is Monday.\n", week_number);
    } else if (week_number == 3) {
        printf("Weekday for week number %d is Tuesday.\n", week_number);
    } else if (week_number == 4) {
        printf("Weekday for week number %d is Wednesday.\n", week_number);
    } else if (week_number == 5) {
        printf("Weekday for week number %d is Thursday.\n", week_number);
    } else if (week_number == 6) {
        printf("Weekday for week number %d is Friday.\n", week_number);
    } else if (week_number == 7) {
        printf("Weekday for week number %d is Saturday.\n", week_number);
    } else {
        printf("Invalid week number.\n");
    }

}
