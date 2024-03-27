/*
project 14
14.Accept 5 numbers from user and find those numbers factorials
*/
#include <stdio.h>

unsigned long long factorial(int num) {
    if (num == 0 || num == 1)
        return 1;
    else {
        unsigned long long fact = 1;
        while (num > 1) {
            fact *= num;
            num--;
        }
        return fact;
    }
}

int main() {
    int numbers[5];
    unsigned long long factorials[5];

    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("\nFactorials of the entered numbers:\n");
    for (int i = 0; i < 5; i++) {
        factorials[i] = factorial(numbers[i]);
        printf("Factorial of %d = %llu\n", numbers[i], factorials[i]);
    }
}
