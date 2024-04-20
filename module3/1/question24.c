#include <stdio.h>

int main() {
    float total_salary = 0;
    float average_salary;
    char name[50];
    float salary;
    int i;

    for (i = 0; i < 5; i++) {
        printf("\n Enter name of employee %d: ", i + 1);
        scanf("%s", name);
        printf("\n Enter salary of employee %d: ", i + 1 );
        scanf("%f", &salary);
        total_salary += salary;
    }

    average_salary = total_salary / 5;

    printf("\nTotal salary of all employees: %.2f\n", total_salary);
    printf("Average salary of all employees: %.2f\n", average_salary);

    return 0;
}