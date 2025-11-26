#include <stdio.h>

enum Months {JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};

int main() {
    enum Months m;

    printf("Enter month number (1-12): ");
    scanf("%d", &m);

    if(m==JAN||m==MAR||m==MAY||m==JUL||m==AUG||m==OCT||m==DEC)
        printf("31 days\n");
    else if(m==APR||m==JUN||m==SEP||m==NOV)
        printf("30 days\n");
    else if(m==FEB)
        printf("28 or 29 days\n");
    else
        printf("Invalid month\n");

    return 0;
}

