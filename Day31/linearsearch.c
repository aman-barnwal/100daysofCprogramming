#include <stdio.h>

int main() {
    int n, i, key, f = 0;

    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (a[i] == key) {
            printf("%d %d", key, i);
            f = 1;
            break;
        }
    }

    if (!f)
        printf("Not Found");

    return 0;
}

