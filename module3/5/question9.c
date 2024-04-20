#include <stdio.h>

int findMaxLength(char *str) {
    int maxLength = 0;
    while (*str) {
        maxLength++;
        str++;
    }

    return maxLength;
}

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int maxLength = findMaxLength(str);

    printf("Maximum number of characters in the string: %d\n", maxLength);

    return 0;
}
