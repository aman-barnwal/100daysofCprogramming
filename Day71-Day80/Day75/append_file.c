#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char text[100];

    fp = fopen("info.txt", "a");

    if(fp == NULL) {
        printf("File not found.\n");
        return 0;
    }

    printf("Enter text to append: ");
    scanf(" %[^\n]", text);

    fprintf(fp, "\n%s", text);

    fclose(fp);
    printf("Text appended.\n");

    return 0;
}

