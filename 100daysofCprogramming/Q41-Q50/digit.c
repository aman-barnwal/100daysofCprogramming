#include <stdio.h>

int main() {
    int n, temp, first, last, digits = 0, result;
    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    last = temp % 10; 
    
    while(temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    first = temp;
    while(first >= 10) { 
        first /= 10;
    }

        if(digits == 1) {
        result = n;
    } else {
        
        int middle = n - first * pow(10, digits - 1) - last;
        
        result = last * pow(10, digits - 1) + middle + first;
    }

    printf("Number after swapping first and last digit: %d\n", result);

    return 0;
}


