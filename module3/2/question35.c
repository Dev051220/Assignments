#include <stdio.h>

int main() {
    int month_number, days_in_month;

    printf("Enter the month number (1-12): ");
    scanf("%d", &month_number);

    int days_in_each_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    days_in_month = days_in_each_month[month_number - 1];

    printf("Number of days in month %d is: %d\n", month_number, days_in_month);

    return 0;
}