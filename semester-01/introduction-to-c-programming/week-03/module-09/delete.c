#include <stdio.h>

int main()
{
    int n, pos;
    printf("Enter the Size of the Array:\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter The Value of The Array:\n");
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter The Index Position:\n");
    scanf("%d", &pos);
    for (size_t i = pos; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    for (size_t i = 0; i < n - 1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}