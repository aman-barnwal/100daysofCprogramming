#include <stdio.h>

int main() {
    char s[300];
    int i = 0, last = 0;

    fgets(s, sizeof(s), stdin);

    while (s[i] != '\0') {
        if (s[i] == ' ' && s[i+1] != ' ' && s[i+1] != '\n')
            last = i + 1;
        i++;
    }

    if (s[0] != ' ' && s[0] != '\n')
        printf("%c ", s[0]);

    i = 0;
    while (s[i] != '\0' && i < last - 1) {
        if (s[i] == ' ' && s[i+1] != ' ' && s[i+1] != '\n')
            printf("%c ", s[i+1]);
        i++;
    }

    i = last;
    while (s[i] != '\0' && s[i] != '\n') {
        printf("%c", s[i]);
        i++;
    }

    return 0;
}

