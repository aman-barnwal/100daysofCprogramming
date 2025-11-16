#include <stdio.h>

int main() {
    char s[200];
    int i = 0, j;

    fgets(s, sizeof(s), stdin);

    while (s[i] != '\0' && s[i] != '\n')
        i++;

    j = i - 1;

    while (j >= 0) {
        printf("%c", s[j]);
        j--;
    }

    return 0;
}

