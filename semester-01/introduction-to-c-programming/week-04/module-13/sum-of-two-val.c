#include <stdio.h>

int main()
{
    int sz, x, flag = 1;
    scanf("%d", &sz);
    int arr[sz];

    for (size_t i = 0; i < sz; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);
    for (size_t i = 0; i < sz - 1; i++)
    {
        for (size_t j = i + 1; j < sz; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                flag = 0;
            }
        }
    }
    if (flag)
    {
        printf("No\n");
    }
    else
    {
        printf("Yes\n");
    }

    return 0;
}