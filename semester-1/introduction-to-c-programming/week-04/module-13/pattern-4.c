#include <stdio.h>

int main()
{
    int n, k, s;
    scanf("%d", &n);
    s = n - 1;
    k = 1;

    for (size_t i = 1; i <= (2 * n) - 1; i++)
    {
        for (size_t j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (size_t j = 1; j <= k; j++)
        {
            printf("*");
        }
        if (i <= n - 1)
        {
            k += 2;
            s--;
        }
        else
        {
            k -= 2;
            s++;
        }
        printf("\n");
    }

    return 0;
}