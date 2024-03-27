/*
project 7
7. WAP to print number in reverse order
*/
#include <stdio.h>

void printReverse(int num)
 {
    int reversedNumber = 0;
    while(num != 0)
     {
        int remainder = num % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        num /= 10;
    }
    printf("Number in reverse order: %d\n", reversedNumber);
}

int main()
 {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printReverse(number);
    
}
