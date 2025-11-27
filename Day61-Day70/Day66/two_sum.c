#include <stdio.h>

int main() {
    int n, target;
    printf("Enter size: ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    printf("Enter target: ");
    scanf("%d",&target);

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] + arr[j] == target){
                printf("%d %d\n", i, j);
                return 0;
            }
        }
    }

    printf("-1 -1\n");
    return 0;
}

