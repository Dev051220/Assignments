//series program
//1 2 3 6 9 18 27 54...

#include <stdio.h>

int main() {
  int n, i;
  long long int term = 1; // Use long long to handle larger numbers

  printf("Enter the number of terms: ");
  scanf("%d", &n);

  printf("Series: ");
  for (i = 1; i <= n; ++i) {
    printf("%lld ", term);
    if (i % 2 == 0) { // Even term (multiply by 3)
      term *= 3;
    } else { // Odd term (multiply by 2)
      term *= 2;
    }
  }
  printf("\n");

    return 0;
}