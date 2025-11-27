#include <stdio.h>

int main() {
    int n, sum;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    sum = n * (n + 1) / 2;

    printf("Sum of first %d natural numbers is %d\n", n, sum);

    return 0;
}

