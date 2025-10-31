#include <stdio.h>

int main() {
    long long num;
    int digit, count[10] = {0}, i, maxDigit, maxCount = 0;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    if(num < 0)
        num = -num; 

    while(num != 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    for(i = 0; i < 10; i++) {
        if(count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("Digit that occurs most: %d (appeared %d times)\n", maxDigit, maxCount);

    return 0;
}

