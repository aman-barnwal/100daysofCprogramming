#include <stdio.h>

int main() {
    int m, n;
    printf("Enter size of first array: ");
    scanf("%d",&m);
    int a[m];
    for(int i=0;i<m;i++) scanf("%d",&a[i]);

    printf("Enter size of second array: ");
    scanf("%d",&n);
    int b[n];
    for(int i=0;i<n;i++) scanf("%d",&b[i]);

    int i=0,j=0;

    printf("Merged array: ");
    while(i<m && j<n){
        if(a[i] <= b[j])
            printf("%d ", a[i++]);
        else
            printf("%d ", b[j++]);
    }

    while(i<m) printf("%d ", a[i++]);
    while(j<n) printf("%d ", b[j++]);

    return 0;
}

