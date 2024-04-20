#include <stdio.h>
#include<math.h>
int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);
    
    printf("First three powers of %d:\n", num);
    printf("%d^1 = %d\n", num, num);
    printf("%d^2 = %d\n", num, (int)pow(num, 2));
    printf("%d^3 = %d\n", num, (int)pow(num, 3));

    return 0;
}