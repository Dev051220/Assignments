#include <stdio.h>

unsigned long long factorial(int num);

int main() {
    int numbers[5];
    
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }
    
    printf("\nFactorials of the entered numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Factorial of %d = %llu\n", numbers[i], factorial(numbers[i]));
    }
    
    return 0;
}

unsigned long long factorial(int num) {
    unsigned long long fact = 1;
    
    for (int i = 1; i <= num; ++i) {
        fact *= i;
    }
    
    return fact;
}
