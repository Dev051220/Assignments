#include <stdio.h>
#include <math.h>
float calculateCompoundInterest(float principal, float rate, int time, int compPerYear)
 {
    float amount;
    amount = principal * pow((1 + rate / (compPerYear * 100)), (compPerYear * time));
    return amount;
}

int main() {
    float principal, rate, amount;
    int time, compPerYear;

    // Input principal amount, rate, time, and compound frequency
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter annual interest rate (in percentage): ");
    scanf("%f", &rate);
    printf("Enter time (in years): ");
    scanf("%d", &time);
    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &compPerYear);

    // Calculate compound interest
    amount = calculateCompoundInterest(principal, rate, time, compPerYear);

    // Output the amount
    printf("Compound interest after %d years: $%.2f\n", time, amount);

    return 0;
}