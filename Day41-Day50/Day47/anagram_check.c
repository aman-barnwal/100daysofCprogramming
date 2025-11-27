#include <stdio.h>

int main() {
    char a[300], b[300];
    int f1[256] = {0}, f2[256] = {0};
    int i = 0;

    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);

    while (a[i] != '\0' && a[i] != '\n') {
        f1[(unsigned char)a[i]]++;
        i++;
    }

    i = 0;
    while (b[i] != '\0' && b[i] != '\n') {
        f2[(unsigned char)b[i]]++;
        i++;
    }

    for (i = 0; i < 256; i++) {
        if (f1[i] != f2[i]) {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");
    return 0;
}

