#include <stdio.h>

int main()
{
    int sz;
    scanf("%d", &sz);
    int arr[sz];
    for (size_t i = 0; i < sz; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (size_t i = 0; i < sz - 1; i++)
    {
        for (size_t j = i + 1; j < sz; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (size_t i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}