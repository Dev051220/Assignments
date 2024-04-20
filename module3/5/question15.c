#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void findLargestAndSmallestWords(char *str, char *largestWord, char *smallestWord) {
    char word[100];
    int i = 0, j = 0;
    int maxLen = 0, minLen = strlen(str); 
    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != ',' && str[i] != '.' && str[i] != '!' && str[i] != '?') {
            word[j++] = str[i];
        } else {
            if (j > 0) {
            word[j] = '\0'; 
                if (strlen(word) > maxLen) {
                    maxLen = strlen(word);
                    strcpy(largestWord, word);
                }
                if (strlen(word) < minLen) {
                    minLen = strlen(word);
                    strcpy(smallestWord, word);
                }
                
                j = 0;
            }
        }
        i++;
    }

    if (j > 0) {
        word[j] = '\0'; 
        if (strlen(word) > maxLen) {
            strcpy(largestWord, word);
        }
        if (strlen(word) < minLen) {
            strcpy(smallestWord, word);
        }
    }
}

int main() {
    char str[1000], largestWord[100], smallestWord[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    findLargestAndSmallestWords(str, largestWord, smallestWord);

    printf("Largest word: %s\n", largestWord);
    printf("Smallest word: %s\n", smallestWord);

    return 0;
}
