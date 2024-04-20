#include <stdio.h>

int main(){
char ch;
printf("Enter character:");
scanf("%c",&ch);
    switch(ch) 
    {
        case 'A':
        printf("A is vovel.");
        break;
        case 'E':
        printf("E is vovel.");
        break;
        case 'I':
        printf("I is vovel.");
        break;
        case 'O':
        printf("O is vovel.");
        break;
        case 'U':
        printf("U is vovel.");
        break;
        
        default:
        printf("It is consonant.");
    }
    return 0;
}
