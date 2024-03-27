#include<stdio.h>
int main()
{
    int i,j,n,k;
    char ch= 'A';
    printf("\n\n\t Input n :");
    scanf("%d",&n);
    printf("\n\n");
    i = 1;
    while (i<= n)
    {
        while (k>=i)
        {
            printf(" ");
            k = k-1;
        }
        
        j = 1;
         
        while (j<= i)
        {
            
            printf("\t %c",ch);
            ch++;
            j=i+1;
        
        }
        printf("\n\n");
    
        i++;
        
    }
    

}
