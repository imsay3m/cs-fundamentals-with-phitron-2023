#include <stdio.h>

int main()
{
    int n, flag = 1;
    scanf("%d", &n);
    int arr[n][n];
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if (i == j)
            {
                if (arr[i][j] != 1)
                {
                    flag = 0;
                }
                continue;
            }
            if (arr[i][j] != 0)
            {
                flag = 0;
            }
        }
    }

    if (flag)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}