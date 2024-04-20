#include <stdio.h>
#include <math.h>

int main() {
    int principal, rate, time, amount, compound_interest;

    printf("Enter the principal amount: ");
    scanf("%d", &principal);
    printf("Enter the interest rate (in percentage): ");
    scanf("%d", &rate);
    printf("Enter the time period (in years): ");
    scanf("%d", &time);

    amount = principal * ((1 + rate / 100), time);

    compound_interest = amount - principal;

    printf("Amount after compound interest: %d\n", amount);
    printf("Compound Interest: %d\n", compound_interest);

}