#include <stdio.h>

int main() {
    char str[200];

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Capitalize first letter if lowercase
    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] = str[0] - 32;

    // Capitalize after space
    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i - 1] == ' ' && str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    printf("Sentence Case: %s", str);
    return 0;
}

