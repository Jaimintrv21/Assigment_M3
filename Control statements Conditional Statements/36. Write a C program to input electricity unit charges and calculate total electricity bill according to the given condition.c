/*
project 36
36. Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit For next 100 units Rs. 0.75/unit For next 100 units Rs. 1.20/unit For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill
*/
#include <stdio.h>

 main()
 {
    float units, total_bill, surcharge = 0;

    
    printf("Enter the electricity units consumed: ");
    scanf("%f", &units);

  
    if (units <= 50)
     {
        total_bill = units * 0.50;
    } 
    else if (units <= 150)
     {
        total_bill = 50 * 0.50 + (units - 50) * 0.75;
    } 
    else if (units <= 250)
     {
        total_bill = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;
    } 
    else 
    {
        total_bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
    }

   
    surcharge = 0.20 * total_bill;

   
    total_bill += surcharge;

    
    printf("Total electricity bill including 20%% surcharge: Rs. %.2f\n", total_bill);

    
}
