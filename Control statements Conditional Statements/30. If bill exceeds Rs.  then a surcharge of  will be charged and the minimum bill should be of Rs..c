/*
project 30
30. If bill exceeds Rs. 800 then a surcharge of 18% will be charged and the minimum bill should be of Rs. 256/-
*/
#include <stdio.h>

 main()
 {
    float surcharge_rate = 0.18; 
    float minimum_bill = 256; 
    float original_bill;


    printf("Enter the original bill amount: ");
    scanf("%f", &original_bill);

   
    float total_bill = original_bill + (original_bill > 800 ? original_bill * surcharge_rate : 0);// we use ternary op.

    
    if (total_bill < minimum_bill) {
        
        original_bill = (minimum_bill - original_bill * surcharge_rate) / (1 + surcharge_rate);
        printf("Adjusted original bill amount: %.2f\n", original_bill);
    } else {
        printf("Original bill amount is already meeting the minimum bill requirement.\n");
    }

   
}


