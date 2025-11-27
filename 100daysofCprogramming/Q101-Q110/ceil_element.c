#include <stdio.h>

int main()
{
    int n, x, index = -1;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter sorted array:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter number to find ceil: ");
    scanf("%d", &x);

    for(int i = 0; i < n; i++)
    {
        if(arr[i] >= x)
        {
            index = i;
            break;
        }
    }

    printf("Ceil Index = %d\n", index);

    return 0;
}

