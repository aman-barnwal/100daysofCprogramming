#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    int num, sum = 0, count = 0;

    fp = fopen("numbers.txt", "r");

    if(fp == NULL) {
        printf("File not found.\n");
        return 0;
    }

    while(fscanf(fp, "%d", &num) != EOF) {
        sum += num;
        count++;
    }

    fclose(fp);

    if(count == 0)
        printf("No numbers in file.\n");
    else {
        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", (float)sum / count);
    }

    return 0;
}

