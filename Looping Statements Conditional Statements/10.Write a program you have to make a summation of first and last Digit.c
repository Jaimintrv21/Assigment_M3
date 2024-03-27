/*
project 10
10.Write a program you have to make a summation of first and last Digit
*/
#include <stdio.h>

int main()
 {
    int num, firstDigit, lastDigit;

    printf("Enter a number: ");
    scanf("%d", &num);

    firstDigit = num;
    while (firstDigit >= 10) 
    {
        firstDigit /= 10;
    }

    lastDigit = num % 10;
    
    printf("The summation of the first and last digits of %d is: %d\n", num,  firstDigit + lastDigit);
}
