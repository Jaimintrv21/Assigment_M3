/*
project 8
8. Write a program to find out the max from given number
*/
#include <stdio.h>

int main() 
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int max, num;
    printf("Enter number 1: ");
    scanf("%d", &max);

    for (int i = 2; i <= n; ++i)
     {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        if (num > max)
         {
            max = num;
        }
    }

    printf("The maximum number is: %d\n", max);

}
