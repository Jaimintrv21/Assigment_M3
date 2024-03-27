/*
project 9
9. Write a program make a summation of given number
*/
#include <stdio.h>

int main()
 {
    int n, sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

   
    for (int i = 1; i <= n; ++i)
     {
        int num;
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        sum += num;
    }

    
    printf("The summation of the numbers is: %d\n", sum);

   
}
