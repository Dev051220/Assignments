#include <stdio.h>

int countWords(char *str) {
    int count = 0;
    int isWord = 0; 

    while (*str) {
    if (*str == ' ' || *str == '\t' || *str == '\n') {
        if (isWord) {
            count++;
            isWord = 0; 
            }
        } else {
            isWord = 1; 
        }
        str++; 
        }

    if (isWord) {
        count++;
    }

    return count;
}

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int wordCount = countWords(str);
    printf("Total number of words in the string: %d\n", wordCount);

    return 0;
}
