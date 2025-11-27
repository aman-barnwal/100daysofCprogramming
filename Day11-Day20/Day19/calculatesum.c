#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    int temp = n; 
    
    while(temp != 0) {
        sum += temp % 10; 
        temp /= 10;       
    }

    printf("Sum of digits of %d is: %d\n", n, sum);
    return 0;
}

