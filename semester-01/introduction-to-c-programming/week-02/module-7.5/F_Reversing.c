#include <stdio.h>

int main()
{
    int size;
    scanf("%d", &size);
    int arr[size];
    for (size_t i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}