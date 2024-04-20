#include <stdio.h>

int main() {
    int years, months, days;

    printf("Enter the number of years: ");
    scanf("%d", &years);


    days = years * 365 ;
    months = years * 12; 

    printf("Years: %d\n", years);
    printf("Months: %d\n", months);
    printf("Days: %d\n", days);

}