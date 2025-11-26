#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d",&n);

    int arr[n];
    int sum = 0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum += arr[i];
    }

    int total = (n * (n + 1)) / 2;
    printf("Missing number = %d\n", total - sum);

    return 0;
}

