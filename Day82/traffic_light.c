#include <stdio.h>

enum Signal {RED, YELLOW, GREEN};

int main() {
    enum Signal s;

    printf("Enter signal (0=RED, 1=YELLOW, 2=GREEN): ");
    scanf("%d", &s);

    if(s == RED) printf("Stop\n");
    else if(s == YELLOW) printf("Wait\n");
    else if(s == GREEN) printf("Go\n");
    else printf("Invalid\n");

    return 0;
}

