#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d",&n);

    int arr[n];
    int visited[1000] = {0};

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(visited[arr[i]] == 1){
            printf("Duplicate = %d\n", arr[i]);
            return 0;
        }
        visited[arr[i]] = 1;
    }

    return 0;
}

