#include <stdio.h>

enum Gender {MALE, FEMALE};

struct Person {
    char name[30];
    enum Gender g;
};

int main() {
    struct Person p;

    printf("Enter name: ");
    scanf("%s",p.name);

    printf("0=Male 1=Female: ");
    scanf("%d",&p.g);

    if(p.g==MALE) printf("Gender: Male\n");
    else printf("Gender: Female\n");

    return 0;
}

