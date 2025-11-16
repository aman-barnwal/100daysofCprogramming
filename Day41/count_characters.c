#include <stdio.h>

int main() {
    char s[100];
    int i = 0, count = 0;

    fgets(s, sizeof(s), stdin);

    while (s[i] != '\0') {
  if (s[i] != '\n')   
     count++;
        i++;
    }

    printf("%d\n", count);
    return 0;
}

