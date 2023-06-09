#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d", &n);
    k = n;
    for (size_t i = 1; i <= n; i++)
    {
        for (size_t j = 1; j <= k; j++)
        {
            printf("%d ", j);
        }
        k--;
        printf("\n");
    }

    return 0;
}