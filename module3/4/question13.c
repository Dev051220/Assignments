#include <stdio.h>
#include <string.h>

int main() {
  char studentNames[5][50]; 

  for (int i = 0; i < 5; i++) {
    printf("Enter name of student %d: ", i + 1);
    fgets(studentNames[i], 50, stdin);

    studentNames[i][strcspn(studentNames[i], "\n")] = '\0';
  }

  printf("\nStudent Names:\n");
  for (int i = 0; i < 5; i++) {
    printf("%d. %s", i + 1, studentNames[i]);
  }

  return 0;
}
