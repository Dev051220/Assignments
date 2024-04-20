#include <stdio.h>
#include <string.h>

int countWordIs(char *str) {
    int count = 0;
    char *word = "is";
    char *found;

    // Find the first occurrence of 'is' in the string
    found = strstr(str, word);

    // Iterate through the string until 'is' is not found
    while (found != NULL) {
        count++;
        found = strstr(found + 1, word);
    }

    return count;
}

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    int count = countWordIs(str);

    printf("Number of times 'is' appears in the string: %d\n", count);

    return 0;
}
