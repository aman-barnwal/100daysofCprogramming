#include <stdio.h>

struct Data { int x; };

void show(struct Data d) {
    printf("%d\n", d.x);
}

int main() {
    struct Data a;
    scanf("%d",&a.x);
    show(a);
    return 0;
}

