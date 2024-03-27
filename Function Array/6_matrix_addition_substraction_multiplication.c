/*
project 6
6. WAP to make addition, Subtraction and multiplication of two matrix using 
	2-D Array

*/

#include <stdio.h>
#include <stdlib.h>

main() 
{
    int i, j, k, arr1[3][3], arr2[3][3], arr3[3][3], option;

    while(1)
    {
    	printf("\n\n\t Please Enter Array 1 : ");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("\n\n\t Input arr1[%d][%d] : ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("\n\n\t Please Enter Array 2 : ");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("\n\n\t Input arr2[%d][%d] : ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }
	
	printf("\n\n\t Array1....................\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d",arr1[i][j]);
		}
		printf("\n\n");
	}
	
	printf("\n\n\t Array2....................\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d",arr2[i][j]);
		}
		printf("\n\n");
	}
	
    printf("\n\n\t What You Want");
    printf("\n\n\t 1. Addition Of Matrix");
    printf("\n\n\t 2. Subtraction Of Matrix");
    printf("\n\n\t 3. Multiplication Of Matrix");
    printf("\n\n\t 4. Exit");
    printf("\n\n\t Please Select : ");
    scanf("%d", &option);

    switch (option) {
        case 1:
            printf("\n\n\t Result of Addition:\n");
            for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++) {
                    arr3[i][j] = arr1[i][j] + arr2[i][j];
                    printf(" %d ", arr3[i][j]);
                }
                printf("\n");
            }
            break;

        case 2 : 
        	printf("\n\n\t Result of Substraction :\n");
            for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++) {
                    arr3[i][j] = arr1[i][j] - arr2[i][j];
                    printf(" %d ", arr3[i][j]);
                }
                printf("\n");
            }
            break;
        
        case 3 :
        	printf("\n\n\t Multiplication of both the arrays....................\n\n");
				for(i=0;i<3;i++)
				{
					for(j=0;j<3;j++)
					{
						arr3[i][j]=0;
						for(k=0;k<3;k++)
						{
							arr3[i][j]+=arr1[i][k]*arr2[k][j];
						}
					}
					printf("\n\n");
				}
				
				for(i=0;i<3;i++)
				{
					for(j=0;j<3;j++)
					{
							printf(" %d",arr3[i][j]);
					}
					printf("\n\n");
    			}	
        		break;
        case 4 :
        	printf("Exiting.....");
        	exit(0);
        default:
            printf("\n\n\t Invalid option selected!\n");
            break;
    }
	}
}

