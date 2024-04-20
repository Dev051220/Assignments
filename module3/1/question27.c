#include <stdio.h>

int main() {
    int days, months;

    printf("Enter the number of days: ");
    scanf("%d", &days);

    months =  days / 30;

    printf("%d days is approximately %d months\n", days, months);

    return 0;
}