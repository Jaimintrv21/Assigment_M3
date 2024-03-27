/*
project 26
26. (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)
*/
#include <stdio.h>

int main() {
    int n, sum = 0;

   
    printf("Enter the value of n: ");
    scanf("%d", &n);


    int inner_sum = 0;
    for (int i = 1; i <= n; i++) {
        inner_sum += i;
        sum += inner_sum;
    }

    
    printf("Sum of the series (1) + (1+2) + (1+2+3) + ... + (1+2+3+...+%d) = %d\n", n, sum);

   
}
