/*
project 22 
22. Accept 3 numbers from user using while loop and check each numbers palindrome
*/
#include <stdio.h>

int isPalindrome(int num) {
    int temp = num, reverse = 0, remainder;
    
    while (temp != 0) {
        remainder = temp % 10;
        reverse = reverse * 10 + remainder;
        temp /= 10;
    }
    
    if (num == reverse)
        return 1;
    else
        return 0;
}

int main() {
    int num1, num2, num3;

    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    
    for (int i = 1; i <= 3; i++) {
        int num;
        if (i == 1)
            num = num1;
        else if (i == 2)
            num = num2;
        else
            num = num3;

        if (isPalindrome(num))
            printf("%d is a palindrome.\n", num);
        else
            printf("%d is not a palindrome.\n", num);
    }

    return 0;
}
