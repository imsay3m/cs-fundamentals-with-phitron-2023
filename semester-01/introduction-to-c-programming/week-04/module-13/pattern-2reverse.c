#include <stdio.h>

int main()
{
    int n, s, k;
    scanf("%d", &n);
    k = (2 * n) - 1;
    s = 0;
    for (size_t i = 1; i <= n; i++)
    {
        for (size_t j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (size_t j = 1; j <= k; j++)
        {
            printf("*");
        }
        k -= 2;
        s++;
        printf("\n");
    }

    return 0;
}