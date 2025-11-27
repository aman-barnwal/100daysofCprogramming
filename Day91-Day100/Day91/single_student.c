#include <stdio.h>

struct Student {
    char name[30];
    int roll;
};

int main() {
    struct Student s;

    scanf("%s%d", s.name, &s.roll);
    printf("Name=%s Roll=%d\n", s.name, s.roll);

    return 0;
}

