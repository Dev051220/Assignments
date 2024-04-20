#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    if (num1 == num2) {
        printf("The numbers %d and %d are equal.\n", num1, num2);
    } else {
        printf("The numbers %d and %d are not equal.\n", num1, num2);
    }

}