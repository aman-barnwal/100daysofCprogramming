#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(int i = 0; i < n; i++) {
        int found = 0;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] > arr[i]) {
                printf("%d", arr[j]);
                found = 1;
                break;
            }
        }
        if(!found) printf("-1");
        if(i < n - 1) printf(", ");
    }

    return 0;
}

