#include <stdio.h>

int main() {
    char s[20];
    int d1, d2, y;

    scanf("%2d/%2d/%4d", &d1, &d2, &y);

    if (d2 == 1) printf("%02d-Jan-%d", d1, y);
    else if (d2 == 2) printf("%02d-Feb-%d", d1, y);
    else if (d2 == 3) printf("%02d-Mar-%d", d1, y);
    else if (d2 == 4) printf("%02d-Apr-%d", d1, y);
    else if (d2 == 5) printf("%02d-May-%d", d1, y);
    else if (d2 == 6) printf("%02d-Jun-%d", d1, y);
    else if (d2 == 7) printf("%02d-Jul-%d", d1, y);
    else if (d2 == 8) printf("%02d-Aug-%d", d1, y);
    else if (d2 == 9) printf("%02d-Sep-%d", d1, y);
    else if (d2 == 10) printf("%02d-Oct-%d", d1, y);
    else if (d2 == 11) printf("%02d-Nov-%d", d1, y);
    else printf("%02d-Dec-%d", d1, y);

    return 0;
}

