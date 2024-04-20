#include <stdio.h>

int main() {
    int years,  days;

    printf("Enter the number of years: ");
    scanf("%d", &years);


    days = years * 365 ;
    printf("Days to years: %d\n", days);
    years= days/365;
    printf("Years to days: %d\n",years);
    return 0;
}