#include <stdio.h>

void reverseString(char *str) {
  if (*str == '\0') {
    return; 
  }

  reverseString(str + 1); // Recursive call to reverse the rest of the string
  printf("%c", *str); // Print the first character after recursion unwinds
}

int main() {
  char str[100];

  printf("Enter a string: ");
  fgets(str, 100, stdin);

  printf("Reversed string: ");
  reverseString(str);
  printf("\n");

  return 0;
}
