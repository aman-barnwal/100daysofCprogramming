#include <stdio.h>

int main() {
    char s[300], ch;
    int i = 0, cnt = 0;

    fgets(s, sizeof(s), stdin);
    scanf("%c", &ch);

    while (s[i] != '\0' && s[i] != '\n') {
        if (s[i] == ch)
            cnt++;
        i++;
    }

    printf("%d", cnt);
    return 0;
}

