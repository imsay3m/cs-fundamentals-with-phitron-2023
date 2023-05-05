#include <stdio.h>
int count_before_zero(int *arr, int sz)
{
    int count = 0;
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] != 0)
        {
            count++;
        }
        else
        {
            return count;
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
    int count = count_before_zero(arr, sz);
    printf("%d\n", count);

    return 0;
}