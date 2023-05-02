#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    long int arr[n];

    for (size_t i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min = arr[0], minIndex = 0;
    int max = arr[0], maxIndex = 0;
    for (size_t i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
            minIndex = i;
        }
        if (max < arr[i])
        {
            max = arr[i];
            maxIndex = i;
        }
    }
    arr[minIndex] = max;
    arr[maxIndex] = min;

    for (size_t i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}