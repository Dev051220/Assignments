#include <stdio.h>
#include <limits.h>

int main() {
    int num1, num2, sum;
    
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("Sum of %d and %d is: %d\n", num1, num2, sum);
    
    if (sum >= INT_MIN && sum <= INT_MAX) {
        printf("Size of sum is within the range of int (%d bytes).\n", sizeof(sum));
    } else {
        printf("Size of sum exceeds the range of int (%d bytes).\n", sizeof(sum));
    }

    return 0;
}