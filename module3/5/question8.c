#include <stdio.h>
#include <ctype.h>

int countVowelsOrConsonants(char *str, char choice) {
    int count = 0;

    while (*str) {
        char ch = tolower(*str); 

        if (choice == 'v') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                count++;
        } else if (choice == 'c') {
            if ((ch >= 'a' && ch <= 'z') && ! (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'))
                count++;
        }
        str++;
    }

    return count;
}

int main() {
    char str[1000];
    char choice;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read string with spaces using fgets

    printf("Enter 'v' to count vowels or 'c' to count consonants: ");
    scanf("%c", &choice);

    int count;
    if (choice == 'v' || choice == 'c') {
        count = countVowelsOrConsonants(str, choice);
        printf("Total number of %s: %d\n", (choice == 'v') ? "vowels" : "consonants", count);
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}
