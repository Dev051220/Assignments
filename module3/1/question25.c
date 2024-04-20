#include <stdio.h>

int main() {
    int totalexpense = 0;
    int averageexpense;
    int expense;
    int i;

        for (i = 0; i < 5; i++) {
        printf("Enter expense %d: ", i + 1);
        scanf("%d", &expense);
        totalexpense += expense;
    }

    averageexpense = totalexpense / 5;

    printf("\nTotal expense: %d\n", totalexpense);
    printf("Average expense: %d\n", averageexpense);

    return 1;
}