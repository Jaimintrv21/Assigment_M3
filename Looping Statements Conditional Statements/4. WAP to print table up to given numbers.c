/*
project 4
4. WAP to print table up to given numbers
*/
#include<stdio.h>
main()
{
    int a,i;
    printf("Enter the number :");
    scanf("%d",&a);
    i=1;
    while (i < 10)
    {
        printf("\n %d * %d = %d",a,i,a*i);
        i++;
    }
    
}