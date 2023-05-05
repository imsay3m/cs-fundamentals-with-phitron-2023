#include <stdio.h>

int main()
{
    int n, k, s;
    scanf("%d", &n);
    s = n - 1;
    k = 1;
    for (size_t i = 1; i <= n; i++)
    {
        for (size_t j = s; j > 0; j--)
        {
            printf(" ");
        }
        for (size_t j = 1; j <= k; j++)
        {
            printf("%d", k);
        }
        k++;
        s--;

        printf("\n");
    }

    return 0;
}