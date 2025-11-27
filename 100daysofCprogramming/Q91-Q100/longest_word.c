#include <stdio.h>

int main() {
    char s[400];
    int i = 0, start = 0, len = 0, maxlen = 0, pos = 0;

    fgets(s, sizeof(s), stdin);

    while (1) {
        if (s[i] == ' ' || s[i] == '\0' || s[i] == '\n') {
            if (len > maxlen) {
                maxlen = len;
                pos = start;
            }
            if (s[i] == '\0' || s[i] == '\n')
                break;
            len = 0;
            start = i + 1;
        } else {
            len++;
        }
        i++;
    }

    for (i = pos; i < pos + maxlen; i++)
        printf("%c", s[i]);

    return 0;
}

