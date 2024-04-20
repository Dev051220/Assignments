#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit, sum;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    lastDigit = num % 10;

    if (num < 10) {
        firstDigit = lastDigit;
    } else {
        while (num >= 10) {
            num /= 10;
        }
        firstDigit = num;
    }
    sum = firstDigit + lastDigit;

    printf("Sum of first and last digits: %d\n", sum);

    return 0;
}
