
/*
project 20
20. Accept monthly salary from the user and deduct 10% insurance premium, 10% loan installment find out of remaining salary.

salary  = s
insurancePremium = ip
loanInstallment = ll 
remainingSalary = rs
*/
#include <stdio.h>

int main()
 {
    float s, ip, ll, rs;
    

    printf("Enter your monthly salary: ");
    scanf("%f", &s);
    
 
    ip = 0.10 * s;
    
   
    ll = 0.10 * s;
    
 
    rs = s - ip - ll;
    
   
    printf("Insurance Premium: $%.2f\n", ip);
    printf("Loan Installment: $%.2f\n", ll);
    printf("Remaining Salary: $%.2f\n", rs);
    

}

