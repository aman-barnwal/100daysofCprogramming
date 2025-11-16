#include <stdio.h>

int main() {
    char s[400];
    int i = 0, start = 0;

    fgets(s, sizeof(s), stdin);

    while (1) {
        if (s[i] == ' ' || s[i] == '\0' || s[i] == '\n') {
            int end = i - 1;
            while (end >= start) {
                printf("%c", s[end]);
                end--;
            }
            if (s[i] == ' ')
                printf(" ");
            if (s[i] == '\0' || s[i] == '\n')
                break;
            start = i + 1;
        }
        i++;
    }

    return 0;
}

