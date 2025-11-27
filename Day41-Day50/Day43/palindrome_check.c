#include <stdio.h>

int main() {
    char s[200];
    int i = 0, j, flag = 1;

    fgets(s, sizeof(s), stdin);

    while (s[i] != '\0' && s[i] != '\n')
        i++;

    j = i - 1;

    for (int k = 0; k < i/2; k++) {
        if (s[k] != s[j-k]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}

