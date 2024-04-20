#include <stdio.h>

int main() 
{
    int n, max, num, i;
    printf("Enter the count of numbers: ");
    scanf("%d", &n);
    printf("Enter number 1: ");
    scanf("%d", &max);
    for (i = 2; i <= n; i++)
     {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
    if (num > max)
     {
        max = num;
        }
    }
    printf("The maximum number is: %d\n", max);

    return 0;
}