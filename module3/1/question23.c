#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Before swapping:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    num1 = num1 * num2; 
    num2 = num1 / num2; 
    num1 = num1 / num2; 

    printf("After swapping using multiplication and division:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

}