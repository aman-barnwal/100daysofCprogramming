#include <stdio.h>

int main() {
    int i, j, space;
    int rows = 5;

    for(i = 1; i <= rows; i++) {
        
        for(space = 1; space < i; space++) {
            printf(" ");
        }
        
        for(j = i; j <= rows; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

