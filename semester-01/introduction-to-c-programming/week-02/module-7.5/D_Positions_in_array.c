#include <stdio.h>

int main()
{
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] <= 10)
        {
            printf("A[%d] = %d\n", i, arr[i]);
        }
    }

    return 0;
}