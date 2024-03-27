/*
project 12
about :-
12. Accept number of students from user. I need to give 5 apples to each student. How many apples are required?
*/





#include <stdio.h>

int main()
 {
    int num_students;
    
    printf("Enter the number of students: ");
    scanf("%d", &num_students);
    
    int total_apples = num_students * 5;
    
    printf("Total apples required: %d\n", total_apples);
    
    return 0;
}

