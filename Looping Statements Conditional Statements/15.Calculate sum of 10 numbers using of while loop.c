/*
project 15 
15.Calculate sum of 10 numbers using of while loop
*/
#include <stdio.h>

int main() {
    int sum = 0;
    int count = 0;
    int number;

    printf("Enter 10 numbers:\n");

    while (count < 10)
     {
        scanf("%d", &number);
        sum += number;
        count++;
    }

    printf("The sum of the 10 numbers is: %d\n", sum);

    
}
