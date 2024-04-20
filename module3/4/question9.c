#include <stdio.h>

struct Employee {
  int empno;
  char empname[50];
  char address[100];
  int age;
};

void printEmployee(struct Employee emp) {
  printf("Employee Number: %d\n", emp.empno);
  printf("Employee Name: %s\n", emp.empname);
  printf("Employee Address: %s\n", emp.address);
  printf("Employee Age: %d\n", emp.age);
}

int main() {
  struct Employee emp1;

  printf("Enter details for employee 1:\n");
  printf("Employee ID: ");
  scanf("%d", &emp1.empno);
  printf("Employee Name: ");
  scanf("%s", emp1.empname);
  printf("Employee Address: ");
  scanf(" %[^\n]", emp1.address); 
  printf("Employee Age: ");
  scanf("%d", &emp1.age);

  printf("\nEmployee 1 Information:\n");
  printEmployee(emp1);

  struct Employee empArr[5];

  for (int i = 0; i < 5; i++) {
    printf("\nEnter details for employee %d:\n", i + 2);
    printf("Employee ID: ");
    scanf("%d", &empArr[i].empno);
    printf("Employee Name: ");
    scanf("%s", empArr[i].empname);
    scanf(" %[^\n]", empArr[i].address);
    printf("Employee Age: ");
    scanf("%d", &empArr[i].age);
  }

  printf("\nEmployee Information:\n");
  for (int i = 0; i < 5; i++) {
    printEmployee(empArr[i]);
    printf("\n");
  }

  return 0;
}
