#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a number.\n");
    } else {
        
        while (i <= n) {
            sum += i; 
            i++;      
        }

        printf("Sum of  numbers up to %d = %d\n", n, sum);
    }

    return 0;
}
