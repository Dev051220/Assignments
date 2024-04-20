#include <stdio.h>

int main() {
    int month_number;
    char *month_names[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    printf("Enter the month number (1-12): ");
    scanf("%d", &month_number);

    printf("Month name for month number %d is: %s\n", month_number, month_names[month_number - 1]);

    return 0;
}