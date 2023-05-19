#include <stdio.h>

int main()
{
    int t, n, f;
    scanf("%d", &t);
    for (size_t i = 1; i <= t; i++)
    {
        scanf("%d", &n);
        int arr[n];
        for (size_t j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
        }
        scanf("%d", &f);

        int pos = 0;
        for (size_t j = 0; j < n; j++)
        {
            if (arr[j] == f)
            {
                pos = j + 1;
                break;
            }
        }
        if (pos)
        {
            printf("Case %ld: %d\n", i, pos);
        }
        else
        {
            printf("Case %ld: Not Found\n", i);
        }
    }

    return 0;
}