//series program
//(1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)

#include <stdio.h>

int main() {
  int n, i, j, sum = 0, tsum = 0; 

  printf("Enter a positive integer: ");
  scanf("%d", &n);

  if (n <= 0) 
  {
    printf("Invalid input. Please enter a positive integer.\n");
    return 1; // Indicate error (optional)
  }

  for (i = 1; i <= n; ++i) {
    tsum = 0; // Reset partial sum for each term
    for (j = 1; j <= i; ++j) {
      tsum += j; // Add elements of the current term
    }
    sum += tsum; 
      }

  printf("The sum of the series 1 + (1+2) + ... + (1+2+3+...+%d) is: %d\n", n, sum);

    return 0;
}