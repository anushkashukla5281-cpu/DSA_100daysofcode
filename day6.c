#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    // Input sorted array
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // If array is empty
    if(n == 0)
        return 0;

    // Print first element
    printf("%d ", arr[0]);

    // Print unique elements
    for(int i = 1; i < n; i++)
    {
        if(arr[i] != arr[i - 1])
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}