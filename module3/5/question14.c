#include <stdio.h>

void combineStrings(char *str1, char *str2, char *combined) {
    int i, j;
    for (i = 0; str1[i] != '\0'; i++) {
        combined[i] = str1[i];
    }
    for (j = 0; str2[j] != '\0'; j++) {
        combined[i + j] = str2[j];
    }
    combined[i + j] = '\0'; 
}

int main() {
    char str1[100], str2[100], combined[200];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    if (str1[strlen(str1) - 1] == '\n') {
        str1[strlen(str1) - 1] = '\0';
    }
    if (str2[strlen(str2) - 1] == '\n') {
        str2[strlen(str2) - 1] = '\0';
    }

    combineStrings(str1, str2, combined);

    printf("Combined string: %s\n", combined);

    return 0;
}
