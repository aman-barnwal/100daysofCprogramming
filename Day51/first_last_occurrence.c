#include <stdio.h>

int main()
{
    int n, target;
    int first = -1, last = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter sorted array elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter target element: ");
    scanf("%d", &target);

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == target)
        {
            if(first == -1)
                first = i;
            last = i;
        }
    }

    printf("First Index = %d\n", first);
    printf("Last Index = %d\n", last);

    return 0;
}

