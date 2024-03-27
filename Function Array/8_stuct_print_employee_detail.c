/*
 project 8
8.   a.   information -print and display empno, empname, address 
		  andage

*/
#include <stdio.h>

struct Employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};

main() {
    struct Employee emp1;

    printf("Enter employee number: ");
    scanf("%d", &emp1.empno);

    printf("Enter employee name: ");
    scanf("%s", emp1.empname);

    printf("Enter address: ");
    scanf("%s", emp1.address);

    printf("Enter age: ");
    scanf("%d", &emp1.age);

    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Address: %s\n", emp.address);
    printf("Age: %d\n", emp.age);

}

