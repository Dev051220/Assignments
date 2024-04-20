#include <stdio.h>
int main() 
{
    int num;
    int factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0) {
    printf("Invalid Number.");
    } else {
    int i = 1;
    do {
    factorial=factorial*i;
    i++;
    } while (i <= num);
    printf("Factorial of %d = %d", num, factorial);
    }
    return 0;
}