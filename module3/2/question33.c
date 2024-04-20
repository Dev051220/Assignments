#include <stdio.h>

int main() {
    int week_number;
    char *days_of_week[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    printf("Enter the week number (1-7): ");
    scanf("%d", &week_number);

    printf("Day of the week for week number %d is: %s\n", week_number, days_of_week[week_number - 1]);

    return 0;
}