/*
project 25
25. (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)
*/
#include <stdio.h>

int main()
 {
    int n, sum = 0;

    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    
    for (int i = 1; i <= n; i++) {
        sum += i * i;
    }

    
    printf("Sum of the series (1*1) + (2*2) + ... + (%d*%d) = %d\n", n, n, sum);


}
