#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d", &n);
    int arr1[n];
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    scanf("%d", &m);
    int arr2[m];
    for (size_t i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }
    int arr3[n + m];
    for (size_t i = 0; i < n; i++)
    {
        arr3[i] = arr1[i];
    }
    for (size_t j = 0, i = n; j < m; j++, i++)
    {
        arr3[i] = arr2[j];
    }
    for (size_t i = 0; i < n + m; i++)
    {
        printf("%d ", arr3[i]);
    }

    return 0;
}