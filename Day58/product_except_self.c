#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n], result[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(int i = 0; i < n; i++) {
        int prod = 1;
        for(int j = 0; j < n; j++) {
            if(i != j)
                prod *= arr[j];
        }
        result[i] = prod;
    }

    printf("Result: ");
    for(int i = 0; i < n; i++)
        printf("%d ", result[i]);

    return 0;
}

