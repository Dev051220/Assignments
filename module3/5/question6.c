#include <stdio.h>

void countCharacters(char *str, int *alphabets, int *digits, int *special) {
    while (*str) {
        if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')) {
            (*alphabets)++;
        } else if (*str >= '0' && *str <= '9') {
            (*digits)++;
        } else {
            (*special)++;
        }
        str++;
    }
}

int main() {
    char str[1000];
    int alphabets = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    countCharacters(str, &alphabets, &digits, &special);

    printf("Total number of alphabets: %d\n", alphabets);
    printf("Total number of digits: %d\n", digits);
    printf("Total number of special characters: %d\n", special);

    return 0;
}
