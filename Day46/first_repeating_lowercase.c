#include <stdio.h>

int main() {
    char s[300];
    int f[26] = {0}, i = 0;
    char ans = '0';

    fgets(s, sizeof(s), stdin);

    while (s[i] != '\0' && s[i] != '\n') {
        char c = s[i];

        if (c >= 'a' && c <= 'z') {
            if (f[c - 'a'] == 1) {
                ans = c;
                break;
            }
            f[c - 'a']++;
        }
        i++;
    }

    if (ans != '0')
        printf("%c", ans);
    else
        printf("-1");

    return 0;
}


