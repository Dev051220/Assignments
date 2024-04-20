#include <stdio.h>

int main() {
    int number;
    printf("Enter 5 numbers:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &number);
        printf("Number %d entered by the user: %d\n", i, number);
    }
    return 0;
}