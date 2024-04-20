#include <stdio.h>

int main() {
    int salary, insurance, loanInstallment, remainingSalary;

    
    printf("Enter monthly salary: ");
    scanf("%d", &salary);

        insurance = 0.1 * salary;
    
        remainingSalary = salary - insurance;

        loanInstallment = 0.1 * remainingSalary;

        remainingSalary -= loanInstallment;

    printf("\nSalary: %d\n", salary);
    printf("Insurance Premium (10%%): %d\n", insurance);
    printf("Loan Installment (10%% of remaining salary): %d\n", loanInstallment);
    printf("Remaining Salary: %d\n", remainingSalary);

    return 0;
}