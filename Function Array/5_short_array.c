/*
project 5 
5. Array of ascending or descending 
*/
#include <stdio.h>

main() {
    int i, j, arr1[5], arr2[5], temp;
    char choice;

    printf("\n\n\t Enter Array 1");
    printf("\n\t--------------------------------------");
    for (i = 0; i < 5; i++) {
        printf("\n\n\t Enter Num %d : ", i + 1);
        scanf("%d", &arr1[i]);
    }

    printf("\n\n\t Enter Array 2");
    printf("\n\t--------------------------------------");
    for (i = 0; i < 5; i++) {
        printf("\n\n\t Enter Num %d : ", i + 1);
        scanf("%d", &arr2[i]);
    }

    printf("\n\n\t Please select Option ");
    printf("\n\t--------------------------------------");
    printf("\n\n\t 1 - Ascending");
    printf("\n\n\t 2 - Descending");
    printf("\n\n\t Please Enter Your Choice : ");
    scanf(" %c", &choice);

    switch (choice) {
        case '1':
            for (i = 0; i < 5; i++) {
                for (j = i + 1; j < 5; j++) {
                    if (arr1[i] > arr1[j]) {
                        temp = arr1[i];
                        arr1[i] = arr1[j];
                        arr1[j] = temp;
                    }
                }
            }
            printf("\n\t Ascending Order for Array 1:");
            for (i = 0; i < 5; i++) {
                printf("\n\t %d", arr1[i]);
            }

            for (i = 0; i < 5; i++) {
                for (j = i + 1; j < 5; j++) {
                    if (arr2[i] > arr2[j]) {
                        temp = arr2[i];
                        arr2[i] = arr2[j];
                        arr2[j] = temp;
                    }
                }
            }
            printf("\n\t Ascending Order for Array 2:");
            for (i = 0; i < 5; i++) {
                printf("\n\t %d", arr2[i]);
            }
            break;

        case '2':
            for (i = 0; i < 5; i++) {
                for (j = i + 1; j < 5; j++) {
                    if (arr1[i] < arr1[j]) {
                        temp = arr1[i];
                        arr1[i] = arr1[j];
                        arr1[j] = temp;
                    }
                }
            }
            printf("\n\t Descending Order for Array 1:");
            for (i = 0; i < 5; i++) {
                printf("\n\t %d", arr1[i]);
            }

            for (i = 0; i < 5; i++) {
                for (j = i + 1; j < 5; j++) {
                    if (arr2[i] < arr2[j]) {
                        temp = arr2[i];
                        arr2[i] = arr2[j];
                        arr2[j] = temp;
                    }
                }
            }
            printf("\n\t Descending Order for Array 2:");
            for (i = 0; i < 5; i++) {
                printf("\n\t %d", arr2[i]);
            }
            break;

        default:
            printf("\n\t Invalid Choice!");
            break;
    }
}

