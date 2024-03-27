/*
project 13
13.calculate the Factorial of a Given Number using while loop
*/
#include <stdio.h>

int main() 
{
    int number;
    unsigned long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) 
    {
        printf("Error! Factorial of a negative number doesn't exist.");
    } 
    else 
    {
        while (number > 0)
         {
            factorial *= number;
            number--;
        }
        printf("Factorial = %llu", factorial);
    }

  
}
