#include <stdio.h>

void extractSubstring(char *str, int start, int end, char *substring) {
    int i, j = 0;

    for (i = start; i <= end; i++) {
        substring[j++] = str[i];
    }
    substring[j] = '\0';
}

int main() {
    char str[1000], substring[1000];
    int start, end;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    printf("Enter the starting index of the substring: ");
    scanf("%d", &start);

    printf("Enter the ending index of the substring: ");
    scanf("%d", &end);

    extractSubstring(str, start, end, substring);

    printf("Substring: %s\n", substring);

    return 0;
}
