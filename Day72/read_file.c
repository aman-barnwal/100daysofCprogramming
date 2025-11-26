#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("info.txt", "r");

    if (fp == NULL) {
        printf("File not found.\n");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF)
        printf("%c", ch);

    fclose(fp);
    return 0;
}

