/*
project 17
17. Calculate 5 numbers from user and calculate number of even and odd using of while loop
*/
#include <stdio.h>

#include <stdio.h>

int main()
 {
    int num, even_count = 0, odd_count = 0;
    int i = 0;

    printf("Enter 5 numbers:\n");

    while (i < 5) {
        scanf("%d", &num);
        if (num % 2 == 0)
            even_count++;
        else
            odd_count++;
        i++;
    }

    printf("Number of even numbers: %d\n", even_count);
    printf("Number of odd numbers: %d\n", odd_count);

 
}
