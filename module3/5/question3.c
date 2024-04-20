#include <stdio.h>

int main() {
    char str[100];
    int length, i;

    printf("Enter a string: ");
    scanf("%s", str);

    for (length = 0; str[length] != '\0'; length++);

    printf("Individual characters of the string in reverse order:\n");
    for (i = length - 1; i >= 0; i--) {
        printf("%c\n", str[i]);
    }

    return 0;
}
