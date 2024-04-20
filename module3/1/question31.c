#include <stdio.h>


int main() {
    int kilometers, meters;

    printf("Enter distance in kilometers: ");
    scanf("%d", &kilometers);

    meters = kilometers*1000 ;

    printf("%d kilometers is equal to %d meters.\n", kilometers, meters);

    return 0;
}