#inc#include <stdio.h>

int main() {
    float a, b, c;
    float discriminant;

    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        printf("Roots are real and distinct.\n");
    } else if (discriminant == 0) {
        printf("Roots are real and equal.\n");
    } else {
        printf("Roots are complex and imaginary.\n");
    }

    return 0;
}

