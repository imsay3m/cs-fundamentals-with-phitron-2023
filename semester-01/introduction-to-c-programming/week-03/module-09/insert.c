#include <stdio.h>

int main()
{
    int n, val, pos;
    printf("Enter the Size of the Array:\n");
    scanf("%d", &n);
    int arr[n + 1];
    printf("Enter The Value of The Array:\n");
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter The Index Position and Value:\n");
    scanf("%d %d", &pos, &val);
    for (size_t i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;
    for (size_t i = 0; i < n + 1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}