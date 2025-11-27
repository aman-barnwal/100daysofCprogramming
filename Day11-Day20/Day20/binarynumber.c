#include <stdio.h>

int main() {
    long long binary, temp;
    int digit;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    temp = binary;

    printf("1's complement: ");
    while(temp != 0) {
        digit = temp % 10;
        if(digit == 0) {
            printf("1");
        } else if(digit == 1) {
            printf("0");
        } else {
            printf("\nInvalid binary number.\n");
            return 1; 
        }
        temp /= 10;
    }

    printf("\n");

    return 0;
}

