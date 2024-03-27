/*
project 17
17. Calculate person’s insurance premium based on salary
the premium is 0.10
*/
#include <stdio.h>


int main() 
{
	float premium;
	float calculateInsurancePremium;
    float premiumPercentage = 0.10;
   // float premium = salary * premiumPercentage;
    float salary, insurancePremium;
    
    // Input salary from the user
    printf("Enter your salary: ");
    scanf("%f", &salary);
    premium = salary * premiumPercentage;
    
    // Output insurance premium
    printf("Your insurance premium: $%.2f\n",premium);
    
}

