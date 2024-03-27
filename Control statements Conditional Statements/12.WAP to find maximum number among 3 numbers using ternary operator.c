/*
project 12
12.WAP to find maximum number among 3 numbers using ternary operator
*/
# include <stdio.h>
 
 main()
{
    int a, b, c, big ;
 
    printf("Enter three numbers : ") ;
 
    scanf("%d %d %d", &a, &b, &c) ;
 
    big = a > b ? (a > c ? a : c) : (b > c ? b : c) ;
 
    printf("\nThe biggest number is : %d", big) ;
}
