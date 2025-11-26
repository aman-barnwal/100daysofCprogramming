#include <stdio.h>

struct Date { int d,m,y; };
struct Emp { struct Date doj; };

int main() {
    struct Emp e;
    scanf("%d%d%d",&e.doj.d,&e.doj.m,&e.doj.y);
    printf("%d/%d/%d\n", e.doj.d, e.doj.m, e.doj.y);
    return 0;
}

