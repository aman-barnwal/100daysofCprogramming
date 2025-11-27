#include <stdio.h>

int main() {
    int i, j;

    printf("*\n\n");

    for(i = 2; i <= 3; i++) {
        for(j = 1; j <= i; j++) {
            printf("*\n");
        }
        printf("\n");
    }

    for(i = 4; i <= 5; i++) {
        for(j = 1; j <= i; j++) {
            printf("*\n");
        }
        printf("\n");
    }

    for(i = 1; i <= 3; i++) {
        printf("*\n");
    }
    printf("\n");

    printf("*\n");

    return 0;
}

