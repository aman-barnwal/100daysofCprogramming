#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    FILE *fp;
    struct Student s;

    fp = fopen("students.txt", "w");

    if(fp == NULL) {
        printf("File error.\n");
        return 0;
    }

    for(int i = 1; i <= 3; i++) {
        printf("Enter name: ");
        scanf("%s", s.name);
        printf("Enter roll: ");
        scanf("%d", &s.roll);
        printf("Enter marks: ");
        scanf("%f", &s.marks);

        fprintf(fp, "%s %d %.2f\n", s.name, s.roll, s.marks);
    }

    fclose(fp);

    // Reading and printing file
    fp = fopen("students.txt", "r");
    printf("\nStored Records:\n");

    while(fscanf(fp, "%s %d %f", s.name, &s.roll, &s.marks) != EOF) {
        printf("Name: %s | Roll: %d | Marks: %.2f\n", s.name, s.roll, s.marks);
    }

    fclose(fp);
    return 0;
}

