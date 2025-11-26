#include <stdio.h>

int main() {
    int n, k, maxSum = -1000000;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    for(int i = 0; i <= n - k; i++) {
        int sum = 0;
        for(int j = i; j < i + k; j++)
            sum += arr[j];

        if(sum > maxSum)
            maxSum = sum;
    }

    printf("Max Sum = %d\n", maxSum);
    return 0;
}

