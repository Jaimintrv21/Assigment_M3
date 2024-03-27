/*
project 14
15. Write a C program to determine eligibility for admission to a professional course based on the following criteria
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and Total in all three subject 
>=190 or  Total in Maths and Physics >=140 ---- Input the marks obtained in
Physics :65 Input the marks obtained in Chemistry :51 Input the marks obtained in Mathematics :72 Total marks of 
Maths, Physics and Chemistry : 188 Total marks of Maths and Physics : 137 The candidate is not eligible.
Topics Covered
*/
#include <stdio.h>

int main() {
    int physics, chemistry, mathematics, total, totalMathsPhysics;

    printf("Input the marks obtained in Physics: ");
    scanf("%d", &physics);
    printf("Input the marks obtained in Chemistry: ");
    scanf("%d", &chemistry);
    printf("Input the marks obtained in Mathematics: ");
    scanf("%d", &mathematics);

    printf("Total marks of Maths, Physics and Chemistry: ");
    scanf("%d", &total);

  
    printf("Total marks of Maths and Physics: ");
    scanf("%d", &totalMathsPhysics);

    
    if (physics >= 65 && chemistry >= 55 && mathematics >= 50 && total >= 190) {
        printf("The candidate is eligible.\n");
    } else if (totalMathsPhysics >= 140) {
        printf("The candidate is eligible.\n");
    } else {
        printf("The candidate is not eligible.\n");
    }

    return 0;
}


