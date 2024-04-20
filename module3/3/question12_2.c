#include <stdio.h>
#include <math.h>

int main() {
    int number, originalNum, remainder, n = 0, result = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    originalNum = number;
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }
    originalNum = number;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }
    if (result == number)
        printf("%d is an Armstrong number.\n", number);
    else
        printf("%d is not an Armstrong number.\n", number);

    return 0;
}
