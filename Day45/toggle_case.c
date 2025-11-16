#include <stdio.h>

int main() {
    char s[300];
    int i = 0;

    fgets(s, sizeof(s), stdin);

    while (s[i] != '\0') {
        char c = s[i];

        if (c >= 'a' && c <= 'z')
            c = c - 32;
        else if (c >= 'A' && c <= 'Z')
            c = c + 32;

        if (c != '\n')
            printf("%c", c);

        i++;
    }

    return 0;
}

