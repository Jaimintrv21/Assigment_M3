#include <stdio.h>  
int main()   
{  
   int r, i, j, number = 1;  
   printf("Enter the number of r: ");  
   scanf("%d", &r);  
   for (i = 1; i <= r; i++)   
   {  
         for (j = 1; j <= i; ++j)  
            {  
                      printf("%d ", number);  
                      ++number;  
         }  
      printf("\n");  
   }  
   
}  