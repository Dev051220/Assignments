#include <stdio.h>

int main() {
    int phy_marks, chem_marks, math_marks, total_marks, total_math_phy;

    printf("Input the marks obtained in Physics: ");
    scanf("%d", &phy_marks);

    printf("Input the marks obtained in Chemistry: ");
    scanf("%d", &chem_marks);

    printf("Input the marks obtained in Mathematics: ");
    scanf("%d", &math_marks);

    printf("Total marks of Maths, Physics, and Chemistry: ");
    scanf("%d", &total_marks);

    printf("Total marks of Maths and Physics: ");
    scanf("%d", &total_math_phy);

    if (phy_marks >= 55 && chem_marks >= 50 && math_marks >= 65 && total_marks >= 190) {
        printf("The candidate is eligible.\n");
    } else if (total_math_phy >= 140) {
        printf("The candidate is eligible.\n");
    } else {
        printf("The candidate is not eligible.\n");
    }

    return 0;
}