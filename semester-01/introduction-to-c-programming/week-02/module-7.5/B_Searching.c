#include <stdio.h>

int main()
{
    int size;
    scanf("%d", &size);
    int arr[size], n;
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &n);

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == n)
        {
            printf("%d", i);
            return 0;
        }
    }
    printf("-1");

    return 0;
}