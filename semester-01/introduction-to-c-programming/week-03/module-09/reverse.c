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
    for (size_t i = 0, j = size - 1; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for (size_t i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}