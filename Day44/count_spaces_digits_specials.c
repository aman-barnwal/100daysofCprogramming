#include <stdio.h>

int main() {
    char s[300];
    int i = 0, sp = 0, d = 0, sc = 0;

    fgets(s, sizeof(s), stdin);

    while (s[i] != '\0' && s[i] != '\n') {
        char ch = s[i];

        if (ch == ' ')
            sp++;
        else if (ch >= '0' && ch <= '9')
            d++;
        else if ((ch < 'A' || ch > 'Z') &&
                 (ch < 'a' || ch > 'z'))
            sc++;

        i++;
    }

    printf("%d %d %d", sp, d, sc);
    return 0;
}

