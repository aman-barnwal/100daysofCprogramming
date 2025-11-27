#include <stdio.h>

int main() {
    int n, k;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    for(int i=0;i<=n-k;i++){
        int found = 0;
        for(int j=i;j<i+k;j++){
            if(arr[j] < 0){
                printf("%d ", arr[j]);
                found = 1;
                break;
            }
        }
        if(!found) printf("0 ");
    }
    return 0;
}

