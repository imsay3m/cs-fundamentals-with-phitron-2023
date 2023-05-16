#include <stdio.h>

int main()
{
    int n, s, k;
    scanf("%d", &n);
    k = 1;
    s = n;
    for (size_t i = 1; i <= n; i++)
    {
        k = (2 * i) - 1;
        for (size_t j = s; j > 1; j--)
        {
            printf(" ");
        }
        if (i % 2 == 0)
        {
            for (size_t j = 1; j <= k; j++)
            {
                printf("*");
            }
        }
        if (i % 2 != 0)
        {
            for (size_t j = 1; j <= k; j++)
            {
                printf("^");
            }
        }
        s--;

        printf("\n");
    }

    return 0;
}