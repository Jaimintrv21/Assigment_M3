/*
project 16
16. Calculate the Sum of Natural Numbers Using the While Loop
*/
#include <stdio.h>

int main()
 {
    int n, i = 1, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    
    if (n <= 0) 
    {
        printf("Please enter a positive integer.\n");
        return 1; 
    }

    while (i <= n)
     {
        sum += i;
        i++;
    }

    printf("Sum of first %d natural numbers = %d\n", n, sum);

    
}
