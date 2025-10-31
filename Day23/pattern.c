#include <stdio.h>

int main() {
    int i, j;
    int rows = 5; 
    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= 5; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

