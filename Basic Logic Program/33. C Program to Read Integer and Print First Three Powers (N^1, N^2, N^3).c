/*
project 33
33. C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)
*/
#include <stdio.h>

 main()
 {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("First three powers of %d are:\n", num);
    printf("%d\n", num);         // N^1
    printf("%d\n", num*num);     // N^2
    printf("%d\n", num*num*num); // N^3

}


