#include <stdio.h>

int main() {
    float angle1, angle2, angle3;

    printf("Enter the three angles of the triangle: ");
    scanf("%f %f %f", &angle1, &angle2, &angle3);

    if (angle1 + angle2 + angle3 == 180) {
        printf("Triangle can be formed with the given angles.\n");
    } else {
        printf("Triangle cannot be formed with the given angles.\n");
    }

    return 0;
}