#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *src, *dest;
    char ch;

    src = fopen("info.txt", "r");
    dest = fopen("copy.txt", "w");

    if(src == NULL || dest == NULL) {
        printf("File error.\n");
        return 0;
    }

    while((ch = fgetc(src)) != EOF)
        fputc(ch, dest);

    fclose(src);
    fclose(dest);

    printf("File copied successfully.\n");
    return 0;
}

