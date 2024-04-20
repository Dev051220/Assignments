#include <stdio.h>

int main() {
    int height_cm;
    
    printf("Enter the height in centimeters: ");
    scanf("%d", &height_cm);
    
    if (height_cm < 150) {
        printf("Person is Short\n");
    } else if (height_cm >= 150 && height_cm < 170) {
        printf("Person is of Average Height\n");
    } else {  
        printf("Person is Tall\n");
    }
}


