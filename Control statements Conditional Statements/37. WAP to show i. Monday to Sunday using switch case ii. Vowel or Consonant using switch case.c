/*
project 37
37. WAP to show
i. Monday to Sunday using switch case
ii. Vowel or Consonant using switch case
*/
//1
#include <stdio.h>
// /*
 main()
 {
    int day;

    printf("Enter the day number (1-7): ");
    scanf("%d", &day);

    
    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day number.\n");
    }

    
}
// */
/*
//2
#include <stdio.h>

main()
 {
    char ch;


    printf("Enter a character: ");
    scanf(" %c", &ch);

    
    ch = tolower(ch);

   
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a vowel.\n", ch);
            break;
        default:
            if ((ch >= 'a' && ch <= 'z'))
                printf("%c is a consonant.\n", ch);
            else
                printf("Invalid input. Please enter an alphabet.\n");
    }

    
}
*/

