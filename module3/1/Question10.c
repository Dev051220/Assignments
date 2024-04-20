#include <stdio.h>  
int main() {  
    int H, L, W ,A ;  
printf("Enter the lenghth of rectangle : ");  
scanf("%d", &L);
printf("Enter the width of rectangle: ");  
scanf("%d", &W);
printf("Enter the height of regtangle : ");  
scanf("%d", &H);
A = 2*(W*L+H*L+H*W) ;    
printf("area of a rectangle prism: %d\n", A);   
    return 0;  
}  