#include <stdio.h>

void toggleCase(char *str) {
    while (*str) {
        if (*str >= 'a' && *str <= 'z') {
            // Convert lowercase to uppercase
            *str = *str - 32;
        } else if (*str >= 'A' && *str <= 'Z') {
            // Convert uppercase to lowercase
            *str = *str + 32;
        }
        str++;
    }
}

int main() {
    char sentence[1000];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin); 

    toggleCase(sentence);

    printf("Modified sentence: %s\n", sentence);

    return 0;
}
