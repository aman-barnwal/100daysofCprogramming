#include <stdio.h>

int main() {
    int n, k;
    printf("Enter size: ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    printf("Enter k: ");
    scanf("%d",&k);

    // Selection sort (simple)
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] > arr[j]){
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }

    if(k >= 1 && k <= n)
        printf("Kth smallest = %d\n", arr[k-1]);
    else
        printf("-1\n");

    return 0;
}

