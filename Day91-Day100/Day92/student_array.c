#include <stdio.h>

struct Student {
    char name[20];
    int marks;
};

int main() {
    struct Student s[3];

    for(int i=0;i<3;i++)
        scanf("%s%d", s[i].name, &s[i].marks);

    for(int i=0;i<3;i++)
        printf("%s %d\n", s[i].name, s[i].marks);

    return 0;
}

