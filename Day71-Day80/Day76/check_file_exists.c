#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char name[50], ch;

    printf("Enter filename: ");
    scanf("%s", name);

    fp = fopen(name, "r");

    if(fp == NULL) {
        printf("File does not exist.\n");
        return 0;
    }

    printf("File Content:\n");
    while((ch = fgetc(fp)) != EOF)
        printf("%c", ch);

    fclose(fp);
    return 0;
}

