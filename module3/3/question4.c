#include <stdio.h>

int main() {
    int num, a;
    printf("Enter the number for multiplication table: ");
    scanf("%d", &num);

    printf("Multiplication table for %d:\n", num);
    for (a = 1; a <= 10; a++) {
        printf("%d * %d = %d\n", num, a, num * a);
    }
}