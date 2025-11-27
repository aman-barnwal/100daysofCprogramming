#include <stdio.h>

enum Status {SUCCESS, FAILURE, TIMEOUT};

int main() {
    enum Status s;

    printf("Enter status (0=SUCCESS,1=FAILURE,2=TIMEOUT): ");
    scanf("%d", &s);

    if(s==SUCCESS) printf("Operation Success\n");
    else if(s==FAILURE) printf("Operation Failed\n");
    else if(s==TIMEOUT) printf("Operation Timeout\n");
    else printf("Invalid\n");

    return 0;
}

