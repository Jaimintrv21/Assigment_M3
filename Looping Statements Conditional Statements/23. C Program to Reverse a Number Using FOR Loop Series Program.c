/*
project 23
23. C Program to Reverse a Number Using FOR Loop
Series Program:
*/
#include <stdio.h>


int reverseNumber(int num)
 {
    int reverse = 0;
    while (num != 0) {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }
    return reverse;
}


void printSeries(int start, int end, int step) 
{
    printf("Series: ");
    for (int i = start; i <= end; i += step) {
        printf("%d ", i);
    }
    printf("\n");
}

int main()
 {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    
    int reversedNum = reverseNumber(num);
    printf("Reversed Number: %d\n", reversedNum);


    printSeries(1, reversedNum, 2);

    return 0;
}
