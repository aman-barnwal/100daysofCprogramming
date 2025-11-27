#include <stdio.h>

int main() {
    char s[300];
    int i = 0;

    fgets(s, sizeof(s), stdin);

    while (s[i] != '\0') {
        char ch = s[i];
        if (ch == ' ')
            ch = '-';
        if (ch != '\n')
            printf("%c", ch);
        i++;
    }

    return 0;
}

