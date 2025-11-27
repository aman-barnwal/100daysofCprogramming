#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *in, *out;
    char ch;

    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");

    if(in == NULL || out == NULL) {
        printf("File error.\n");
        return 0;
    }

    while((ch = fgetc(in)) != EOF) {
        if(ch >= 'a' && ch <= 'z')
            ch = ch - 32;
        fputc(ch, out);
    }

    fclose(in);
    fclose(out);
    printf("Converted and saved to output.txt\n");

    return 0;
}

