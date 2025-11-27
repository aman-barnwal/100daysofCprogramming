#include <stdio.h>

enum Days {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};

int main() {
    enum Days d;

    for(d = SUNDAY; d <= SATURDAY; d++)
        printf("Day value = %d\n", d);

    return 0;
}

