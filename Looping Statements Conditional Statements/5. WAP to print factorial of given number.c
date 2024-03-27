/*
project 5
5. WAP to print factorial of given number
*/
#include<stdio.h>
 main()
{
    
    int a=0,b=1,c,n,number;
    printf("\n\n\t enter the number :");
    scanf("%d",&number);
    printf("\n\n\t %d %d",a,b);
    n=2;
    while ( n <= number)
    {
       
        c= a+b;
        printf("\n\n\t %d",c);
        a=b;
        b =c;
        n++;
        


    }
    
}
