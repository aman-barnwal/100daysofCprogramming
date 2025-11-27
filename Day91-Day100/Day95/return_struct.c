#include <stdio.h>

struct Box { int a; };

struct Box get() {
    struct Box b;
    b.a = 100;
    return b;
}

int main() {
    struct Box b = get();
    printf("%d\n", b.a);
    return 0;
}

