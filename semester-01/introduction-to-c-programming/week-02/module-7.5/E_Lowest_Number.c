#include <stdio.h>

int main()
{
    int size, n = 0;
    scanf("%d", &size);
    long int arr[size];
    for (size_t i = 0; i < size; i++)
    {
        scanf("%ld", &arr[i]);
    }
    int min = arr[0];
    for (size_t i = 0; i < size; i++)
    {

        if (min > arr[i])
        {
            min = arr[i];
            n = i + 1;
        }
    }
    if (min == arr[0])
    {
        n = 1;
    }

    printf("%d %d\n", min, n);

    return 0;
}