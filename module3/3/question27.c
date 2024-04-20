#include <stdio.h>

int main() {
  int num, originalNum, remainder, reversedNum = 0;
  int count = 1;

  while (count <= 3) {
    printf("Enter number %d: ", count);
    scanf("%d", &num);

    originalNum = num;

    // Check if number is negative
    if (num < 0) {
      printf("%d is not a palindrome (negative numbers are not considered palindromes).\n", num);
      count++;
      continue; // Skip to the next iteration
    }

    // Reverse the number
    while (num != 0) {
      remainder = num % 10;
      reversedNum = reversedNum * 10 + remainder;
      num /= 10;
    }

    // Check if palindrome
    if (originalNum == reversedNum) {
      printf("%d is a palindrome.\n", originalNum);
    } else {
      printf("%d is not a palindrome.\n", originalNum);
    }

    count++;
    reversedNum = 0; // Reset reversedNum for next iteration
  }

    return 0;
}