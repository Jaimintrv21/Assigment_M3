/*
project 26
26.Convert temperature Fahrenheit to Celsius
*/
#include <stdio.h>

 main()
 {
    float fahrenheit, celsius;

  
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    
    celsius = (fahrenheit - 32) * 5 / 9;

    
    printf("Temperature in Celsius: %.2f\n", celsius);

}

