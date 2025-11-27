#include <stdio.h>

int main() {
    char s[200];
    int i = 0;

    fgets(s, sizeof(s), stdin);

    while (s[i] != '\0') {
        char ch = s[i];
        if (ch >= 'a' && ch <= 'z')
            ch = ch - 32;

        if (ch != '\n')
            printf("%c", ch);

        i++;
    }

    return 0;
}

