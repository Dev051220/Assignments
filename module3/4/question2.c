#include <stdio.h>

int main() {
    int num1, num2, choice;
    int result;
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            result = num1 + num2;
            printf("Addition of %d and %d is: %.2f\n", num1, num2, result);
            break;
        case 2:
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            result = num1 - num2;
            printf("Subtraction of %d and %d is: %.2f\n", num1, num2, result);
            break;
        case 3:
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            result = num1 * num2;
            printf("Multiplication of %d and %d is: %.2f\n", num1, num2, result);
            break;
        case 4:
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            if (num2 == 0) {
                printf("Division by zero is not allowed!\n");
            } else {
                result = (int) num1 / num2;
                printf("Division of %d and %d is: %.2f\n", num1, num2, result);
            }
            break;
        case 5:
            printf("Exiting calculator...\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
            break;
    }

    return 0;
}
