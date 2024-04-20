#include <stdio.h>
#include <math.h>

int main() {
    int number, originalNum, remainder, n = 0, result = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    originalNum = number;

    for (originalNum = number; originalNum != 0; originalNum /= 10, ++n);

    originalNum = number;

    for ( originalNum != 0; originalNum /= 10;) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
    }
    if (result == number)
        printf("%d is an Armstrong number.\n", number);
    else
        printf("%d is not an Armstrong number.\n", number);

    return 0;
}
