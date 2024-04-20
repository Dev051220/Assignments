#include <stdio.h>

int main() {
    int num, evenCount = 0, oddCount = 0, sumEven = 0, sumOdd = 0;
    int a;

    printf("Enter 10 numbers:\n");
    for (a = 1; a <= 10; a++) {
        printf("Enter number %d: ", a);
        scanf("%d", &num);
        
        if (num % 2 == 0) {
            evenCount++;
            sumEven += num;
        } else {
            oddCount++;
            sumOdd += num;
        }
    }

    printf("a. Number of even numbers: %d\n", evenCount);
    printf("b. Number of odd numbers: %d\n", oddCount);
    printf("c. Sum of even numbers: %d\n", sumEven);
    printf("d. Sum of odd numbers: %d\n", sumOdd);

    return 0;
}