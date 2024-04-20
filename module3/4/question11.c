#include <stdio.h>

int isPalindrome(int num) {
    int reversedNum = 0, originalNum = num;

    for (; num != 0; num /= 10) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
    }

    if (originalNum == reversedNum) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num)) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }

    return 0;
}
