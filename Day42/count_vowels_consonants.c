#include <stdio.h>

int main() {
    char s[200];
    int i = 0, v = 0, c = 0;

    fgets(s, sizeof(s), stdin);

    while (s[i] != '\0') {
        char ch = s[i];

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            char t = ch;
            if (t >= 'A' && t <= 'Z') t = t + 32;

            if (t=='a' || t=='e' || t=='i' || t=='o' || t=='u')
                v++;
            else
                c++;
        }
        i++;
    }

    printf("Vowel = %d\n Consonent = %d\n", v, c);
    return 0;
}

