#include <stdio.h>

int calculateInsurancePremium(float salary, float percentage) {
    return salary * percentage / 100.0;
}

int main() {
    int salary, percentage, premium;

    printf("Enter your salary: ");
    scanf("%d", &salary);
    printf("Enter the percentage for insurance premium calculation: ");
    scanf("%d", &percentage);

    premium = calculateInsurancePremium(salary, percentage);

    printf("Your insurance premium is: %.d\n", premium);

    return 0;
}