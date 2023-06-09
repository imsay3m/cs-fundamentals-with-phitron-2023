#include <stdio.h>

int main()
{
    int size, even = 0, odd = 0;
    scanf("%d", &size);
    int arr[size];
    for (size_t i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even = even + arr[i];
        }
        else
        {
            odd = odd + arr[i];
        }
    }
    printf("%d %d", even, odd);

    return 0;
}