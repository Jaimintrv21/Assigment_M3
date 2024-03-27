/*
project 29
29.Convert minutes into seconds and hours
*/
#include <stdio.h>

main() 
{
    int minutes, hours, seconds;

   
    printf("Enter number of minutes: ");
    scanf("%d", &minutes);

   
    hours = minutes / 60;   // 1 hour = 60 minutes
    seconds = minutes * 60; // 1 minute = 60 seconds

    
    printf("Equivalent: %d minutes = %d hours + %d seconds\n", minutes, hours, seconds);

   
}

