#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    for (size_t i = 0; i < k; i++)
    {
        for (size_t i = 1; i <= n; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}