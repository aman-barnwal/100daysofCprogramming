#include <stdio.h>

int main() {
    char s[300];
    int i = 0;

    fgets(s, sizeof(s), stdin);

    while (s[i] != '\0') {
        char c = s[i];

        if (!(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
              c=='A'||c=='E'||c=='I'||c=='O'||c=='U')) {
            if (c != '\n')
                printf("%c", c);
        }
        i++;
    }

    return 0;
}

