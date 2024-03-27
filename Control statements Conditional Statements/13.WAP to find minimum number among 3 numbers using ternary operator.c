/*
project 13
 13.WAP to find minimum number among 3 numbers using ternary operator
 */
 # include <stdio.h>
 
 main()
{
    int a, b, c, big ;
 
    printf("Enter three numbers : ") ;
 
    scanf("%d %d %d", &a, &b, &c) ;
 
    big = a < b ? (a < c ? a : c) : (b < c ? b : c) ;
 
    printf("\nThe minimum number is : %d", big) ;
}
