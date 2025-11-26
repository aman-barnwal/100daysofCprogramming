#include <stdio.h>

int main() {
    int n, count, majority = -1;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(int i = 0; i < n; i++) {
        count = 0;
        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j])
                count++;
        }
        if(count > n / 2) {
            majority = arr[i];
            break;
        }
    }

    if(majority == -1)
        printf("-1\n");
    else
        printf("Majority Element = %d\n", majority);

    return 0;
}

