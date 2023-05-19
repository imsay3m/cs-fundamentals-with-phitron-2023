#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr1[n], arr2[n];
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (size_t i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];
    }
    int max = arr1[0];
    for (size_t i = 0; i < n; i++)
    {
        if (max < arr1[i])
        {
            max = arr1[i];
        }
    }
    for (size_t i = 0; i < n; i++)
    {
        arr2[i] = max - arr1[i];
    }

    for (size_t i = 0; i < n; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}