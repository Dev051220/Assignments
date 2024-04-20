#include <stdio.h>

int main() {
    char names[5][50];     
    printf("Enter 5 names, one per line:\n");
    
    for (int i = 0; i < 5; i++) {
        printf("Name %d: ", i + 1);
        fgets(names[i], 50, stdin);
    }
    
    printf("\nYou entered the following names:\n");
    
    for (int i = 0; i < 5; i++) {
        printf("%d. %s", i + 1, names[i]);
    }
    
    return 0;
}
