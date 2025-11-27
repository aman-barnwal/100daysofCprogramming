#include <stdio.h>

int main() {
    int n, original, sum = 0, digits = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    int temp = n;
    while(temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    while(temp != 0) {
        int digit = temp % 10;
        int power = 1;
        for(int i = 1; i <= digits; i++) {
            power *= digit; 
        }
        sum += power;
        temp /= 10;
    }

    if(sum == original) {
        printf("%d is an Armstrong number\n", original);
    } else {
        printf("%d is not an Armstrong number\n", original);
    }

    return 0;
}


