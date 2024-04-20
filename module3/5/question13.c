#include <stdio.h>
#include <ctype.h>

void removeNonAlphabets(char *str) {
    int i, j;

    for (i = 0, j = 0; str[i] != '\0'; i++) {
         if (isalpha(str[i])) {

            str[j++] = str[i];
        }
    }
    str[j] = '\0'; 
}

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    removeNonAlphabets(str);

    printf("String after removing non-alphabetic characters: %s\n", str);

    return 0;
}
