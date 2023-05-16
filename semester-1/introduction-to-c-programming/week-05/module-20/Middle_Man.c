#include <stdio.h>
void selectionSort(int *arr, int sz)
{
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
}
int main()
{
    int sz;
    scanf("%d", &sz);
    int arr[sz];
    for (size_t i = 0; i < sz; i++)
    {
        scanf("%d", &arr[i]);
    }
    selectionSort(arr, sz);

    if (sz % 2 != 0)
    {
        int i = ((sz + 1) / 2) - 1;
        printf("%d", arr[i]);
    }
    else
    {
        int i = (sz / 2) - 1;
        printf("%d %d", arr[i], arr[i + 1]);
    }

    return 0;
}