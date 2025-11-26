#include <stdio.h>

int main() {
    int n, k;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    for(int i = 0; i <= n - k; i++) {
        int max = arr[i];
        for(int j = i; j < i + k; j++) {
            if(arr[j] > max)
                max = arr[j];
        }
        printf("%d ", max);
    }

    return 0;
}

