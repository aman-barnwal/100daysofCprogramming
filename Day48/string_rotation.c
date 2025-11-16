#include <stdio.h>

int main() {
    char a[300], b[300], d[600];
    int i = 0, j = 0, k = 0, found = 0;

    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);

    while (a[i] != '\0' && a[i] != '\n')
        i++;
    while (b[j] != '\0' && b[j] != '\n')
        j++;

    if (i != j) {
        printf("No");
        return 0;
    }

    for (k = 0; k < i; k++)
        d[k] = a[k];
    for (k = 0; k < i; k++)
        d[k + i] = a[k];
    d[2 * i] = '\0';

    for (k = 0; d[k] != '\0'; k++) {
        int x = 0, y = k;
        while (b[x] != '\0' && b[x] != '\n' && d[y] == b[x]) {
            x++;
            y++;
        }
        if (b[x] == '\0' || b[x] == '\n') {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Yes");
    else
        printf("No");

    return 0;
}

