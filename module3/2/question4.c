#include <stdio.h>

int main() {
    char operator;
    int num1, num2, result;

    printf("Enter operator (+, -, *, /, %): ");
    scanf(" %c", &operator);

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (operator == '+') {
        result = num1 + num2;
        printf("Result: %d + %d = %d\n", num1, num2, result);
    } else if (operator == '-') {
        result = num1 - num2;
        printf("Result: %d - %d = %d\n", num1, num2, result);
    } else if (operator == '*') {
        result = num1 * num2;
        printf("Result: %d * %d = %d\n", num1, num2, result);
    } else if (operator == '/') {
        if (num2 != 0) {
            result = num1 / num2;
            printf("Result: %d / %d = %d\n", num1, num2, result);
        } else {
            printf("Error! Division by zero is not allowed.\n");
        }
    } else if (operator == '%') {
        if (num2 != 0) {
            result = num1 % num2; 
            printf("Result: %d % %d = %d\n", num1, num2, result);
        } else {
            printf("Error! Modulo by zero is not allowed.\n");
        }
    } else {
        printf("Error! Invalid operator.\n");
    }
}