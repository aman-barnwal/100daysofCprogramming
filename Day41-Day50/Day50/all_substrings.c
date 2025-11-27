#include <stdio.h>

int main() {
    char s[300];
    int i = 0, j, k;

    fgets(s, sizeof(s), stdin);

    while (s[i] != '\0' && s[i] != '\n')
        i++;

    for (j = 0; j < i; j++) {
        for (k = j; k < i; k++) {
            int x;
            for (x = j; x <= k; x++)
                printf("%c", s[x]);
            printf("\n");
        }
    }

    return 0;
}

