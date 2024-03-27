/*
project 31
31. Convert kilometers into meters
*/
#include <stdio.h>

 main() 
{
    float kilometers, meters;

   
    printf("Enter distance in kilometers: ");
    scanf("%f", &kilometers);

    // Convert kilometers to meters
    meters = kilometers * 1000; // 1 kilometer = 1000 meters

   
    printf("%.2f kilometers is equal to %.2f meters\n", kilometers, meters);

   
}

