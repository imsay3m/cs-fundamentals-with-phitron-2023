#include <stdio.h>

int main()
{
    int size;
    scanf("%d", &size);
    int arr[size];
    for (size_t i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > 0)
        {
            arr[i] = 1;
        }
        else if (arr[i] < 0)
        {
            arr[i] = 2;
        }
    }

    for (size_t i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}