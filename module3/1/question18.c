#include <stdio.h>

int calculateAnnualSalary(int monthlySalary) {
    return monthlySalary * 12;
}

int main() {
    int monthlySalary, annualSalary;

    printf("Enter your monthly salary: ");
    scanf("%d", &monthlySalary);
    annualSalary = calculateAnnualSalary(monthlySalary);
    printf("Your annual salary is: %d\n", annualSalary);

    return 0;
}