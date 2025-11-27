#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    int maxSoFar = arr[0];
    int current = arr[0];

    for(int i=1;i<n;i++){
        if(current < 0)
            current = arr[i];
        else
            current += arr[i];

        if(current > maxSoFar)
            maxSoFar = current;
    }

    printf("Max Sum = %d\n", maxSoFar);
    return 0;
}

