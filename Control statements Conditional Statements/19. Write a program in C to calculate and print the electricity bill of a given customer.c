/*
project 19 to 29


19. Write a program in C to calculate and print the electricity bill of a given customer. The customer ID, name, and unit consumed by the user should be captured from the keyboard to display the total amount to be paid to the customer. The charge are as follow :
20. Unit
21. Charge/unit
22. upto 350
23. @1.20
24. 350 and above but less than 600
25. @1.50
26. 600 and above but less than 800
27. @1.80
28. 800 and above
29. @2.00
*/
#include <stdio.h>

 main()
  {
    int customer_id, units;
    char customer_name[50];


    printf("Enter customer ID: ");
    scanf("%d", &customer_id);

    printf("Enter customer name: ");
    scanf("%s", customer_name);

    printf("Enter units consumed: ");
    scanf("%d", &units);

    
    float total_amount;
    if (units <= 350)
	 {
        total_amount = units * 1.20;
    } else if (units <= 600)
	 {
        total_amount = 350 * 1.20 + (units - 350) * 1.50;
    } else if (units <= 800)
	 {
        total_amount = 350 * 1.20 + 250 * 1.50 + (units - 600) * 1.80;
    } else
	 {
        total_amount = 350 * 1.20 + 250 * 1.50 + 200 * 1.80 + (units - 800) * 2.00;
    }

   
    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", customer_id);
    printf("Customer Name: %s\n", customer_name);
    printf("Units Consumed: %d\n", units);
    printf("Total Amount to be Paid: %.2f\n", total_amount);

    
}


