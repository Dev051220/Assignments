
#include <stdio.h>

int main() {
  int num, reversedNum = 0, remainder;

  printf("Enter an integer: ");
  scanf("%d", &num);

  // Handle negative numbers (optional)
  if (num < 0) {
    printf("Negative numbers are not considered for reversal.\n");
  } else {
    // Reverse the number
    for ( ; num != 0; num /= 10) {
      remainder = num % 10;
      reversedNum = reversedNum * 10 + remainder;
    }

    printf("Reversed number: %d\n", reversedNum);
  }

    return 0;
}